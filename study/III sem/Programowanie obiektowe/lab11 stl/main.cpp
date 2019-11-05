#include <iostream>
#include <string.h>
#include <cmath>


using namespace std;

template <typename T>
bool czy_palindrom(const T& t, int dlugosc)
{
    int j=0;
    for (int i=0; i<ceil(dlugosc/2); i++)
    {
        j=dlugosc-1 - i;
        if (t[i] != t[j]) return false;
    }
    return true;
}



void palindromTest();


int main()
{
    palindromTest();




    return 0;
}

void palindromTest()
{
    char *tekst1 = "anilina";
    char tekst2[] = "Taki sobie napis";
    string tekst3("malajalam");
    int tab1[] = {1, 2, 3, 6, 3, 2, 1};
    int tab2[] = {1, 2, 3, 4, 4, 2, 1};
    char tab3[] = {'r', 'o', 't', 'a', 't', 'o', 'r'};

    cout<<"tekst1"<<endl;
    if (czy_palindrom(tekst1, strlen(tekst1))) cout<<"Tak"<<endl;
    else cout<<"nie"<<endl;

    cout<<"tekst2"<<endl;
    if (czy_palindrom(tekst2, strlen(tekst2))) cout<<"Tak"<<endl;
    else cout<<"nie"<<endl;

    cout<<"tekst3"<<endl;
    if (czy_palindrom(tekst3, tekst3.length())) cout<<"Tak"<<endl;
    else cout<<"nie"<<endl;



    cout<<"tab1, dlugosc = "<<sizeof(tab1) / sizeof(tab1[0])<<endl;
    if (czy_palindrom(tab1, sizeof(tab1) / sizeof(tab1[0]) )) cout<<"Tak"<<endl;
    else cout<<"nie"<<endl;

    cout<<"tab2, dlugosc = "<<sizeof(tab2)  / sizeof(tab2[0])<<endl;
    if (czy_palindrom(tab2, sizeof(tab2) / sizeof(tab2[0]))) cout<<"Tak"<<endl;
    else cout<<"nie"<<endl;

    cout<<"tab3, dlugosc = "<<sizeof(tab3)  / sizeof(tab3[0])<<endl;
    if (czy_palindrom(tab3, sizeof(tab3) / sizeof(tab3[0]))) cout<<"Tak"<<endl;
    else cout<<"nie"<<endl;

}


