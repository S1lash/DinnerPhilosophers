#include "forks.h"

QMutex Forks::globalMutex;

Forks::Forks(int indexInArray)
{

    this->number = indexInArray+1;
    this->isAlieve = false;

}


void Forks::Take(int PhyNum, string hand)
{

    mutex.lock();
    this->isAlieve = true;
    /*globalMutex.lock();
    cout<<"Phy #" << PhyNum << " TAKE " << hand <<" fork"<<endl;
    globalMutex.unlock(); */

}


void Forks::Lose(int PhyNum, string hand)
{

    this->isAlieve = false;
    /*globalMutex.lock();
    cout<<"Phy #" << PhyNum << " LOSE " << hand <<" fork"<<endl;
    globalMutex.unlock();*/
    mutex.unlock();

}
