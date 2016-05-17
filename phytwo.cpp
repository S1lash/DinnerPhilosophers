#include "phytwo.h"
#include <iostream>

using namespace  std;

int PhyTwo::countDin = 0;

PhyTwo::PhyTwo()
{
}

PhyTwo::PhyTwo(QVector <Forks> forks, int numberOfPhy, int allPhy, bool stop)
{
    this->number = numberOfPhy;
    this->forks = forks;
    this->wantEat = false;
    this->stop = stop;
    this->maxPlaces = allPhy - 1;
    this->leftFork = this->number;
    if (this->number == 1){
        this->rightFork = allPhy;
    } else {
        this->rightFork = this->number - 1;
    };
}

void PhyTwo::run()
{
    cout<<"I am Phy # "<< this->number<<endl;
}


