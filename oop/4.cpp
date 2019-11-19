#include <iostream>

using namespace std;
class Animal
{
    static int counter ;
    string name;
public:
    Animal(string name)
    {
        this->name = name; 
        Animal::counter ++;
    }
    string dajRodzajZwierzecia() const
    {
        return "Animal: ";
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
    const string for_string()
    {
        return "Animal has name: " + this->name;
    }
};
int Animal::counter = 0;
//derived_class    base_class     
class Dog: public Animal
{
public:
    Dog(string name):  Animal(name)
    {

    }
    string dajRodzajZwierzecia()
    {
        return "Dog";
    }
    void bark()
    {
        cout << "Gaw - gaw" << endl;
    }
    void give_paw()
    {
        cout << "give me a paw" << endl;
    }

};
int main()
{
    Dog d1 = Dog("Tuzik");
    cout << d1.get_name() << " " ; 
    d1.give_paw();
    d1.bark();
    cout << d1.for_string() << endl;
    return 0;
}
