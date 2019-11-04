#include <iostream>
#include <cmath>
using namespace std;
///////////////////////////////////////////////////////////////////////////
int sign(float num);
///////////////////////////////////////////////////////////////////////////
void zad1()
{
    float a=1e-16, b=10, c=1; 
    float delta = 0;
    delta=pow(b,2) - 4*a*c;
    if(delta >= 0)
    {
        
        if(delta == 0)
        {
            float rozw = -b / (2*a);
            cout << "Poniewaz delta jest rowna zero, to uklad rownan ";
            cout << a <<"x  + " << b <<"y + " << c << " = 0";
            cout << " ma dokladnie jedno rozwiazanie: " << rozw << endl;
        }
        else
        {
            float sqrt_delta = sqrt(delta);
            float rozw1 = (-b + sqrt_delta) / (2*a);
            float rozw2 = (-b - sqrt_delta) / (2*a);
            cout << "Poniewaz delta jest wieksza  od zero, to uklad rownan ";
            cout << a <<"x  + " << b <<"y + " << c << " = 0";
            cout << " ma dokladnie dwa rozwiazania: " << rozw1 << " i " << rozw2 << endl;
        }
        
    }
    else
    {
        cout << "Poniewaz delta jest mniejsza  od zero, to uklad rownan ";
        cout << a <<"x  + " << b <<"y + " << c << " = 0";
        cout << " niema rozwiazan" << endl;
    }
    
    

}
///////////////////////////////////////////////////////////////////////////
void zad2()
{
    float a=1e-16,b=10,c=1;
     
    float x1,x2;
    x1 = -b/(2*a) + sign(-b/2/a)*sqrt(pow(b/2/a,2)-c/a);
    x2 = c / (a*x1);
    cout << "x1 = " << x1 <<"   x2 = "<< x2 << endl;


}
///////////////////////////////////////////////////////////////////////////
void zad3()
{
    float x = 0.182321556;
    for(int i = 1; i <= 16; i++)
    {
        x = 1.0/i - 5.0*x;
        cout << "i = " << i << " - " << x <<endl;
    }
    cout << endl << endl << "b" <<endl;
    float xx = 0.0098;
    for(int i = 16; i > 0; i--)
    {
        xx = 1/(5.0*i)-1/5.0*xx;
        cout << "i = " << i << " = " << xx << endl;
    }
}
///////////////////////////////////////////////////////////////////////////
int main()
{
    int choice;
    do
    {
        cout << "Wybierz zadanie 1-3: ";
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