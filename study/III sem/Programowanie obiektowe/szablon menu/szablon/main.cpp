#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();

using namespace std;

int main()
{

    int wybor;

    do
    {
       cout<<"MENU:"<<endl<<"1 - zadanie 1.1"<<endl<<"2 -  zadanie 1.2"<<endl<<"3 - zadanie 1.3"<<endl<<"4 -  zadanie 1.4"<<endl<<"5 - zadanie 1.5"<<endl<<"0 -  wyjscie"<<endl<<"Twoj wybor: ";
        cin>>wybor;
        if (wybor !=0)
        {
            switch (wybor)
            {
                case 1:
                zad1();
                break;

                case 2:
                zad2();
                break;

                case 3:
                zad3();
                break;

                case 4:
                zad4();
                break;

                case 5:
                zad5();
                break;
            }
            getchar();
            getchar();
        }
        system("cls");
    } while (wybor != 0);


    cout<<"Koncze dzialanie programu... Wcisnij dowolny przycisk"<<endl;
    getchar();
    getchar();
    return 0;
}

void zad1()
{
    cout<<"zadanie 1"<<endl;
}

void zad2()
{
    cout<<"zadanie 2"<<endl;
}

void zad3()
{
    cout<<"zadanie 3"<<endl;
}

void zad4()
{
    cout<<"zadanie 4"<<endl;
}

void zad5()
{
   cout<<"zadanie 5"<<endl;
}
