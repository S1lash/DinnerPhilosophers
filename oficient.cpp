#include "oficient.h"

using namespace  std;

Oficient::Oficient(int numGuests)
{
    this->numGuests = numGuests;
}


void Oficient::Serving()
{
   forks.reserve(numGuests);
   for (int i = 0; i < numGuests; i++)
   {
       Forks *temp = new Forks(i);;
       forks.push_back(temp);
   }
}


void Oficient::CreateListGuests()
{

    phy.reserve(numGuests);
    for(int i = 0; i < numGuests; i++)
    {
        Phy *temp = new Phy(forks,i,numGuests);
        phy.push_back(temp);
    }
}


void Oficient::OpenRestaurant()
{

    Serving();
    CreateListGuests();

}


void Oficient::ClosedRestaurant()
{

    int str = cin.get();
    while (str!=9999)
    {
            exit(0);
    }

}

