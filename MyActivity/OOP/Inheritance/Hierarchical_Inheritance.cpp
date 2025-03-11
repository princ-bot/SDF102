#include <iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout << "This animal is eating\n";
        }
};

class Dog : public Animal
{
    public:
        void bark()
        {
            cout << "The dog is barking\n";
        }
};

class Cat : public Animal 
{
    public:
        void meow()
        {
            cout << "The cat is meowing.\n";
        }
};

int main()
{
    Dog myDog;
    Cat myCat;
    myDog.eat(); // Inheritance from animal
    myDog.bark(); //  Method from Dog
    myCat.eat(); // Inheritance from Animal
    myCat.meow(); // Method from cat  
}
