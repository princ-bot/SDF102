#include <iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout << "Animal eats.\n";    
        }
        
        // Virtual function for runtime polymorphism
        virtual void sound()
        {
            cout << "Animal makes a sound.\n";
        }
};

class Dog : public Animal   // 'public' inheritance
{
    public:

        // New function specific to Dog
        void bark()
        {
            cout << "Dog barks.\n";
        }

        // Overriding the base class's sound method
        void sound() override
        {
            cout << "Dog barks loud.\n";
        }
};

int main()
{
    Dog myDog;
    
    // Inherited function
    myDog.eat();

    // Function spicific to dog
    myDog.bark();

    // Override method demonstrate polymorphism
    myDog.sound();

    return 0;
}
