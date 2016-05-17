#include <QCoreApplication>
#include <forks.h>
#include <phy.h>
#include <oficient.h>
#include <iostream>


using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num = 5;

           Oficient oficient(num);
           oficient.OpenRestaurant();
           PrintResult print(oficient.phy);
           oficient.ClosedRestaurant();



    return a.exec();
}
