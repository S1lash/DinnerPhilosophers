#include "phy.h"

int Phy::countDin = 0;
QMutex Phy::mutex;


Phy::Phy(QVector <Forks*> forks, int numberOfPhyInArr, int allPhy)
{
    this->number = numberOfPhyInArr+1;
    this->forks = forks;
    this->wantEat = false;
    this->eatNow = false;
    this->maxPlaces = allPhy - 1;
    this->leftFork = this->number;
    if (this->number == 1){
        this->rightFork = allPhy;
    } else {
        this->rightFork = this->number - 1;
    };
    this->start();
}


void Phy::run()
{

    while (true) {
           if (!this->wantEat){
               sleep(getRandom()/500);
               this->wantEat = true;
           } else{
               if (IGO()) {
                            forks[IndFork(leftFork)]->Take(number,"left");
                                            forks[IndFork(rightFork)]->Take(number,"right");
                                                                eatNow=true;
                                                                sleep((getRandom())/500);
                                                                eatNow=false;
                                            forks[IndFork(rightFork)]->Lose(number,"right");
                            forks[IndFork(leftFork)]->Lose(number,"left");
                    this->LeaveDinninrRoom();
                    this->wantEat = false;
               }
           }
    }

}


int Phy::IndFork(int numberOfFork)
{

    return numberOfFork-1;

}


void Phy::GoInDinningRoom()
{

            countDin++;

}


void Phy::LeaveDinninrRoom()
{

    mutex.lock();
            countDin--;
    mutex.unlock();

}


bool Phy::IGO()
{

    mutex.lock();
    if (countDin<this->maxPlaces){
        GoInDinningRoom();
        mutex.unlock();
        return true;
    }
    else{
        mutex.unlock();
        return false;
    }

}


int Phy::getRandom()
{

    QTime midnight(0,0,0);
    qsrand(midnight.secsTo(QTime::currentTime()));

    int rand =  qrand() % 1500;
    return rand;

}

