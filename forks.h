#ifndef FORKS_H
#define FORKS_H
#include <QMutex>
#include <QString>
#include <iostream>

using namespace  std;

class Forks
{

public:

    int number;
    bool isAlieve;

    Forks(int indexInArray);
    void Take(int PhyNum, string hand);
    void Lose(int PhyNum, string hand);

private:

    QMutex mutex;
    static QMutex globalMutex;

};

#endif // FORKS_H
