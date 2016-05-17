#ifndef PRINTRESULT_H
#define PRINTRESULT_H
#include <QVector>
#include <QThread>
#include <QMutex>
#include <iostream>
#include "QTime"
#include <phy.h>

using namespace  std;

class PrintResult : public QThread
{
public:

    PrintResult(QVector <Phy*>  phy);
    void run();

private:

    QVector <Phy*>  phy;
    QTime time;

};

#endif // PRINTRESULT_H
