#include <iostream>
#include <stdio.h>
#include <sstream>
#include <iomanip>
using namespace std;
namespace kolega1{string name="Oleh"; string surname="Hoba";};
namespace kolega2{string name="Pavel"; string surname="Kociolka";};
///////////////////////////////////////////////////////////////////////////
void zad1()
{
    string name="Jan", surname="Kochanowski";
    cout<<name<<surname<<endl;
    cout<<kolega1::name<<" "<<kolega1::surname<<endl;
    cout<<kolega2::name<<" "<<kolega2::surname<<endl;
}
///////////////////////////////////////////////////////////////////////////
void zad2()
{
    
    
    char c;
    int i;
    float f;
    double d;
    char s[20];
    printf("Podaj char: ");
    scanf("%s",&c);
    printf("Podaj int: ");
    scanf("%d",&i);
    printf("Podaj float: ");
    scanf("%f",&f);
    printf("Podaj double: ");
    scanf("%lf",&d);
    printf("Podaj lancuch znakow: ");
    scanf("%19s",s);
    printf("Char: %c\n",c);
    printf("Int: %d\n",i);
    printf("Float: %f\n", f);
    printf("Double: %lf\n",d);
    printf("Lancuch znakow: %s\n",s);

}
///////////////////////////////////////////////////////////////////////////
void zad3()
{
    int liczba;
    cout<<"Podaj liczbe w systemie dziesietnym:"<<endl;
    cin>>liczba;
    int wybor;
    cout<<"Dla konwertowania w system osemkowy wcisnij 1,\n dla konwertowania w system szesnastkowy wcisnij 2:"<<endl;
    cin>>wybor;
    if(wybor == 1)
    {
        printf("%o\n",liczba);
        cout<<showbase<<oct<<liczba<<endl;    
    }
    else if(wybor == 2)
    {
        printf("%x\n",liczba);
        cout<<showbase<<hex<<liczba<<endl;
    }
    const int &st=liczba;
    cout<<st<<endl;
    const_cast<int &>(st)=2;
    cout<<st<<endl;
}
///////////////////////////////////////////////////////////////////////////
namespace pies{};
namespace kot
{
    string imie="Murczyk"; 
    int humor=5,
        glod=1,
        zmeczenie=1;
    void baw_sie(int czas);
    void odpoczywaj(int czas)
    {
        zmeczenie -= czas;
        
    }
    void jedz(int ilosc)
    {
        glod -= ilosc;
    }
};

namespace pies
{
    string imie="Topa";
    int humor=10,
        glod=2,
        zmeczenie=2;
    void baw_sie(int czas);

    void odpoczywaj(int czas)
    {
        zmeczenie -= czas;
        
    }
    void jedz(int ilosc)
    {
        glod -= ilosc;
    }
};
void kot::baw_sie(int czas)
{
    humor += czas;
    pies::humor -= czas;
    glod += czas;
    zmeczenie += czas;
}
void pies::baw_sie(int czas)
    {
        humor += czas;
        kot::humor -= czas;
        glod += czas;
        zmeczenie += czas;
    }
void zad4()
{
    cout<<kot::imie<<" "<<kot::humor<<" "<<" "<<kot::glod<<" "<<kot::zmeczenie<<endl;
    cout<<pies::imie<<" "<<pies::humor<<" "<<" "<<pies::glod<<" "<<pies::zmeczenie<<endl;
    pies::baw_sie(10);
    cout<<"Po bawieniu sie z psem: "<<endl;
    cout<<kot::imie<<" "<<kot::humor<<" "<<" "<<kot::glod<<" "<<kot::zmeczenie<<endl;
    cout<<pies::imie<<" "<<pies::humor<<" "<<" "<<pies::glod<<" "<<pies::zmeczenie<<endl;
    kot::baw_sie(10);
    cout<<"Po bawieniu sie z kotem "<<endl;
    cout<<kot::imie<<" "<<kot::humor<<" "<<" "<<kot::glod<<" "<<kot::zmeczenie<<endl;
    cout<<pies::imie<<" "<<pies::humor<<" "<<" "<<pies::glod<<" "<<pies::zmeczenie<<endl;
    pies::odpoczywaj(10);
    cout<<"Po odpoczynku psa: "<<endl;
    cout<<kot::imie<<" "<<kot::humor<<" "<<" "<<kot::glod<<" "<<kot::zmeczenie<<endl;
    cout<<pies::imie<<" "<<pies::humor<<" "<<" "<<pies::glod<<" "<<pies::zmeczenie<<endl;
    kot::jedz(10);
    cout<<"Po jedeniu kota: "<<endl;
    cout<<kot::imie<<" "<<kot::humor<<" "<<" "<<kot::glod<<" "<<kot::zmeczenie<<endl;
    cout<<pies::imie<<" "<<pies::humor<<" "<<" "<<pies::glod<<" "<<pies::zmeczenie<<endl;
    pies::jedz(10);
    cout<<"Po jedeniu psa: "<<endl;
    cout<<kot::imie<<" "<<kot::humor<<" "<<" "<<kot::glod<<" "<<kot::zmeczenie<<endl;
    cout<<pies::imie<<" "<<pies::humor<<" "<<" "<<pies::glod<<" "<<pies::zmeczenie<<endl;
    kot::odpoczywaj(10);
    cout<<"Po odpoczynku kota: "<<endl;
    cout<<kot::imie<<" "<<kot::humor<<" "<<" "<<kot::glod<<" "<<kot::zmeczenie<<endl;
    cout<<pies::imie<<" "<<pies::humor<<" "<<" "<<pies::glod<<" "<<pies::zmeczenie<<endl;
}
///////////////////////////////////////////////////////////////////////////
struct Pracownik
{
    string  imie,
            nazwisko,
            data_zatrudnienia;

    int godziny;

    float   stawka,
            placa;
};
void zad5()
{
    int ilosc;
    do
    {
        cout<<"Podaj ilosc pracownikow: ";
        cin>>ilosc;    
    } while(ilosc<1);
    struct Pracownik * pracownicy = new Pracownik [ilosc]; 
    for(int i=0;i<ilosc;i++)
    {
        cout<<"Pracownik "<<i+1<<": Podaj imie:";
        cin>>pracownicy[i].imie;
        cout<<"Pracownik "<<i+1<<": Podaj nazwiko:";
        cin>>pracownicy[i].nazwisko;
        cout<<"Pracownik "<<i+1<<": Podaj date zatrudninia:";
        cin>>pracownicy[i].data_zatrudnienia;
        cout<<"Pracownik "<<i+1<<": Podaj stawke:";
        cin>>pracownicy[i].stawka;
        cout<<"Pracownik "<<i+1<<": Podaj ilosc godzin:";
        cin>>pracownicy[i].godziny;
        pracownicy[i].placa = pracownicy[i].godziny * pracownicy[i].stawka;
        stringstream strumien;
        strumien<<pracownicy[i].imie<<" "<<pracownicy[i].nazwisko<<" "<<pracownicy[i].data_zatrudnienia<<" "<<pracownicy[i].stawka<<" "<<pracownicy[i].godziny<<" "<<pracownicy[i].placa;
        cout<<strumien.str()<<endl;
    }
    for(int i=0; i<ilosc; i++)
    {
        cout<<pracownicy[i].imie<<" "<<pracownicy[i].nazwisko<<" - "<<pracownicy[i].placa<<endl;
    }
    stringstream strumien;
    strumien<<"cx"<<endl;
    cout<<strumien.str()<<endl;
    int a=6,b=4,c=5;
    strumien<<a<<b<<c;
    cout<<strumien.str()<<endl;
    
}

///////////////////////////////////////////////////////////////////////////
struct Struktura
{
    int first;
    int second;
};
void zad6()
{
    
    cout<<setw(15)<<right<<"Hello, world"<<endl;
    int var = 10;
    int &ref_var = var;
    cout<<var<<endl;
    cout<<ref_var<<endl;
    ref_var = 20;
    cout<<var<<endl;
    cout<<ref_var<<endl;
    Struktura struktura;
    Struktura &ref_struct = struktura;
    struktura.first = 1;
    struktura.second = 2;
    cout<<"First: "<<struktura.first<<" second: "<<struktura.second<<endl;
    cout<<"ref_First: "<<ref_struct.first<<" ref_second: "<<ref_struct.second<<endl;
    ref_struct.first = 10;
    ref_struct.second = 20;
    cout<<"First: "<<struktura.first<<" second: "<<struktura.second<<endl;
    cout<<"ref_First: "<<ref_struct.first<<" ref_second: "<<ref_struct.second<<endl;

    
    
}
///////////////////////////////////////////////////////////////////////////
void zad7()
{
    int * wsk_int = new int;
    *wsk_int = 1;
    cout << *wsk_int << endl;
    delete wsk_int;
    int * array_int = new int [10];
    for (int i = 0; i < 10; ++i)
    {
        array_int[i] = i;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << array_int[i] <<endl;
    } 
    delete [] array_int;
}
//////////////////////////////////////////////////////////
class Animal
{
public:
    static int counter ;
    string name;

    Animal(string name)
    {
        this->name = name; 
        Animal::counter ++;
    }
    static int number_of_animals()
    {
        return counter;
    }
    void set(string name)
    {
        this->name = name;
    }
    const string &  for_string()
    {
        const  string &const_ref = this->name;
        return const_ref;
    }
};
int Animal::counter = 0;
///////////////////////////////////////////////////////////
bool same(Animal a1, Animal a2)
{
    if(a1.name == a2.name)
    {
        return true;
    }
    else return false;
}
////////////////////////////////////////////////////////////
void zad8()
{
    cout << "The number of animamals: " << Animal::number_of_animals() << endl;
    Animal a1 = Animal( "Wojtek" );
    cout << "The number of animamals: " << Animal::number_of_animals() << endl;
    Animal a2 = Animal( "Kurek" );
    cout << "The number of animamals: " << Animal::number_of_animals() << endl;
    const string & const_reference = a1.for_string();
    a1.set("Zhenia");
    a2.set("Zhenia");
    cout << const_reference << endl;
    cout << a2.name << endl;
    cout << "The names animal are the same: " << (same(a1,a2) == 0? "no":"yes") << endl;
    cout << "The number of animamals: " << Animal::number_of_animals() << endl;
}
//////////////////////////////////////////////////////////
void zad9()
{
    cout << "The number of animamals: " << Animal::number_of_animals() << endl;
}
//////////////////////////////////////////////////////////
void zad10()
{
    for(int i = 0; i < 128; i++)
    {
        cout << i << " = " << static_cast<char>(i) << endl;
    }
}
/////////////////////////////////////////////////////////////////////////
int main()
{
    int choice;
    do
    {
        cout << "Wybierz zadanie 1-8: ";
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
            case 4:
                zad4();
                break;
            case 5:
                zad5();
                break;
            case 6:
                zad6();
                break;
            case 7:
                zad7();
                break;
            case 8:
                zad8();
                break;
            case 9:
                zad9();
                break;
            case 10:
                zad10();
                break;
            default:
                break;
        }

    }while(choice != 0);
    
    return 0;
}