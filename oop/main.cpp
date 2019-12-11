#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;
class Kot
{
public:
    string getRodzaj()
    {
        return "Kot";
    }
};
class Pies
{
public:
    string getRodzaj()
    {
        return "Pies";
    }
};
template <typename T,int capacity>
class Buda
{
    T* value[capacity];
public:
    void setValue(T* v,int n)
    {
        value[n] = v;
    }
    T* getValue()
    {
        return value;
    }
};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Kot k1,k2;
    Pies p1,p2;
    Buda <Kot,2>b1,b2;
    Buda <Pies,2>b3,b4;
    b1.setValue(&k1,0);
    b2.setValue(&k2,1);
    b3.setValue(&p1,0);
    b4.setValue(&p2,1);
    //cout << b1.getValue();
    //cout << b2.getValue();
    vector<string> str;
    string pom = "";

    return a.exec();
}
