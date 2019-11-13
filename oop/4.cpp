#include <iostream>

using namespace std;
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
    string get_name()
    {
        return name;
    }
    void set_name(string name)
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
class Dog: public Animal
{
public:
    Dog(string name):  Animal(name)
    {

    }

};
int main()
{
    Dog d1 = Dog("Tuzik");
    cout << d1.get_name() << endl;
    return 0;
}