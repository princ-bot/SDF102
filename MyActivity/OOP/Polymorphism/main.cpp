#include <iostream>
using namespace std;

class Animal
{
    public:
        // Virtual function to allow dynamic building
        virtual void sound() const
        {
            cout << "Some generic animal sound.\n";
        }
        
        // Virutal destructor for proper cleanup
        virtual ~Animal() {}
};

class Dog : public Animal
{
    public:
        // Virtual destructor for proper cleanup
        void sound() const override
        {
            cout << "Dog barks: woof!\n";
        }
};

class Cat : public Animal
{
    public:
        // Overriding the base class function
        void sound() const override
        {
            cout << "Cat meows: Meow!\n";
        }
};

int main()
{
    // Using base class pointer to refer to derived class object
    Animal* animals[] = { new Dog(), new Cat()};

    for (Animal* animal : animals)
    {
        // Dynamic binding: calls the overridden function base on the actual object type
        animal -> sound();
    }    
    
    // Free allocation memory
    for (Animal* animal : animals)
    {
        delete animal;
    }

    return 0;
}
