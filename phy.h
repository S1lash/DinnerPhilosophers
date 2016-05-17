#ifndef PHY_H
#define PHY_H
#include <forks.h>
#include <QVector>
#include <QThread>
#include <QMutex>
#include <iostream>
#include "QTime"

using namespace  std;

class Phy : public QThread
{
public:

    bool eatNow;
    int number;

    Phy(QVector <Forks*>  forks, int numberOfPhyInArr, int allPhy);
    void run();

private:

    static int countDin;
    static QMutex mutex;
    int leftFork;
    int rightFork;
    int maxPlaces;
    bool wantEat;
    QVector <Forks*> forks;

    int IndFork (int numberOfFork);
    int getRandom();
    bool IGO();
    void GoInDinningRoom();
    void LeaveDinninrRoom();

};

#endif // PHY_H
