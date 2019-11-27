#include <iostream>

using namespace std;
//////////////////////////////////
class Life_function
{
public:
    virtual void eat()=0;
    virtual void drink()=0;
};
////////////////////////////////
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
//////////////////////////////////////////////////////////////////
//derived_class    base_class     

class Dog: public Animal, public Life_function
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
    virtual void eat()
    {
        cout << "Dog:eat" << endl;
    }
    virtual void drink()
    {
        cout << "Dog:drink" << endl;
    }

};
//////////////////////////////////
class Cat: public Animal, public Life_function
{
public:
    virtual void eat()
    {
        cout << "Cat:eat" << endl;
    }
    virtual void drink()
    {
        cout << "Cat:drink" << endl;
    }
};
/////////////////////////////////////////////////
class Shelter_animal
{
    Animal* array_pointer_animal [100] ;
public:
    Shelter_animal()
    {
        for(int i=0;i<100;i++)
        {
            array_pointer_animal[i]= NULL;
        }
    }
    void take_animal(Animal* z,int number)
    {
        array_pointer_animal[number] = z;
    }
    Animal* przygarnij_zwierzatko(int number)
    {
        return array_pointer_animal[number];
    }
};
//////////////////////////////////////////////////////////////////
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
    cout << "////////////////////////////////////\n";
    Life_function* f = &d1;
    f -> eat();
    Shelter_animal s1 = Shelter_animal();
    Dog d5 = Dog("d5");
    Dog d6 = Dog("d6");
    Dog d7 = Dog("d7");
    s1.take_animal(&d5,0);
    s1.take_animal(&d6,1);
    s1.take_animal(&d7,2);
    Dog * pom;
    pom = dynamic_cast<Dog*>(s1.przygarnij_zwierzatko(1));
    if(pom == NULL)
    {
        cout << "std::bad_cast" << endl;
    }
    else 
    {
        pom->give_paw();
        cout<<pom->to_string()<<endl;
    }
    //to_string();
    return 0;
}
