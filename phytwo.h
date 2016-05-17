#ifndef PHYTWO_H
#define PHYTWO_H
#include <forks.h>
#include <QVector>
#include <QThread>

class PhyTwo: public QThread
{
    Q_OBJECT
protected:
    void run();

public:

    PhyTwo();
    PhyTwo(QVector <Forks> forks, int numberOfPhy, int allPhy, bool stop);

    int number; // Number of Place;
    int leftFork; // Number of Fork for Left Hand;
    int rightFork; // Number of Fork for Right Hand;
    int maxPlaces; // The maximum number of places in the restaurant;
    bool wantEat; // If the Phy want eat, then true;
    bool stop;  // It gives information bout stop the programm;
    static int countDin;
    QVector <Forks> forks;

    void TakeLeftFork();
    void TakeRightFork();
    void LoseLeftFork();
    void LoseRightFork();
    void Sleep(int time);
    int IndFork (int numberOfFork);
    int GetInd();
    static void GoInDinninrRoom();
    static void LeaveDinninrRoom();
    static bool IGO(int maxPlace);

};

#endif // PHYTWO_H
