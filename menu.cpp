#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////////////////
void zad1()
{
    
}
///////////////////////////////////////////////////////////////////////////
void zad2()
{
    
}
///////////////////////////////////////////////////////////////////////////
void zad3()
{
    
}
///////////////////////////////////////////////////////////////////////////
int main()
{
    int choice;
    do
    {
        cout << "Wybierz numer szadania: ";
        cin >> choice;
        switch(choice)
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
            default:
                break;
        }

    }while(choice != 4);
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////
int sign(float num)
{
    //return 1;
    if(num>0) return 1;
    else if(num<0) return -1;
    else return 0;
}
