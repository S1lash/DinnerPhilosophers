#include "printresult.h"

PrintResult::PrintResult(QVector <Phy*>  phy)
{
    this->phy = phy;
    this->start();
}


void PrintResult::run()
{
    while (true){
        cout <<time.currentTime().hour()<<":" <<time.currentTime().minute()<<":" <<time.currentTime().second()<<endl;
        for (int i=0; i < phy.length(); i++)
        {
            cout<< "Phy #"<<phy[i]->number<<"   ";
        }
        cout<<endl;
        for (int i=0; i < phy.length(); i++)
        {
            cout << "    "<< phy[i]->eatNow<<"    ";

        }
        cout<<endl<<endl;
        sleep(1);
    }
}

