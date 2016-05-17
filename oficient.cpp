#include "oficient.h"

using namespace  std;

Oficient::Oficient(int numGuests)
{
    this->numGuests = numGuests;
}


void Oficient::Serving()
{
   forks.reserve(numGuests); //Резервируем место в память под вилки
   for (int i = 0; i < numGuests; i++)
   {
       Forks *temp = new Forks(i);; //Создаем временный указатель на вилку, которой передаем индекс i
       forks.push_back(temp); // Добавляем новую вилку в конец вектора
   }
}


void Oficient::CreateListGuests()
{

    phy.reserve(numGuests); //Резервируем место в памяти под гостей
    for(int i = 0; i < numGuests; i++)
    {
        Phy *temp = new Phy(forks,i,numGuests); // Создаем временный указатель на философа и передаем ему в конструктор три параметра)
        phy.push_back(temp);//Добавляем нового филосова в конец вектора
    }
}


void Oficient::OpenRestaurant()
{

    Serving();
    CreateListGuests();

}


void Oficient::ClosedRestaurant()
{

    int str = cin.get(); // Ждем ввода с клавиатуры
    while (str!=9999) // Если введенная комбинация 9999, то программа останавливается
    {
            exit(0);
    }

}

