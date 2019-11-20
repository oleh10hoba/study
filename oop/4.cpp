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
    virtual string dajRodzajZwierzecia() const
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
    virtual const string to_string()
    {
        
        return dajRodzajZwierzecia() + this->name;
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
    
    virtual string dajRodzajZwierzecia() const
    {
        return "Dog ";
    }
    void bark()
    {
        cout << "Gaw - gaw" << endl;
    }
    void give_paw()
    {
        cout << "give me a paw" << endl;
    }
    virtual const string to_string()
    {
        
        return dajRodzajZwierzecia() + get_name();
    }

};
int main()
{
    Animal a1 = Animal("a1");
    cout << "Animal a1 name: " << a1.get_name() << endl;
    cout << a1.to_string() << endl;
    Dog d1 = Dog("d1");
    cout << d1.get_name() << endl ; 
    cout << "+ " << d1.to_string() << endl;
    d1.give_paw();
    d1.bark();
    cout << d1.to_string() << endl;
    Animal& refAnimal = a1;
    cout << refAnimal.to_string() << endl;
    Animal& refDog = d1;
    cout << refDog.to_string() << endl;
    Animal* pAnimal =  &a1;
    Animal* pDog = &d1;
    cout << "pAnimal: " << pAnimal->to_string() << endl;
    cout << "pDog: " << pDog->to_string() << endl;
    cout << d1.dajRodzajZwierzecia() << endl;
    Dog* pDog2 = dynamic_cast<Dog*>(&refDog);
    cout << pDog2->to_string() <<  endl;
    pDog2->bark();
    cout << pDog2->dajRodzajZwierzecia() << endl;
    Dog& refDog2 = dynamic_cast<Dog&>(refDog);
    cout << refDog2.to_string() << endl;
    cout << refDog2.dajRodzajZwierzecia() << endl;
    return 0;
}
