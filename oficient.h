#ifndef OFICIENT_H
#define OFICIENT_H
#include <forks.h>
#include <phy.h>
#include <QVector>
#include <iostream>
#include "printresult.h"

using namespace  std;

class Oficient
{

public:

    Oficient(int numGuests);
    void OpenRestaurant();
    void ClosedRestaurant();

    QVector <Phy*> phy;


private:

    QVector <Forks*> forks;
    int numGuests;


    void CreateListGuests();
    void Serving();

};

#endif // OFICIENT_H
