#include <iostream>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        // Reconstruct to initialize object
        Person(string n, int a) : name(n), age(a) {}

        // Getter for name
        string getName() const
        {
            return name;
        }

        // Setter for name
        void setName(const string& n)
        {
            name = n;
        }
        
        // Getter for age
        int getAge() const
        {
            return age;
        }
        
        // Setter for age with data validation
        void setAge(int a)
        {
            if (a >= 0)
            {
                age = a;
            }
            else
            {
                cout << "Age cannot be negative." << endl;
            }
        }

        // Display function to print out the object's data
        void display() const 
        {
            cout << name << "\t\t" << age << endl;
        }
};

int main()
{
    // Creating an object of Person
    Person person("Alice", 20);
    
    cout << "Name\t\t" << "Age\n";
    person.display();

    // Modifying data via public getters
    cout << "Name\t\t" << "Age\n";
    person.setName("Prince");
    person.setAge(20);
    person.display();

    // Attemp to set an invalid age
    person.setAge(-1);
    person.display();

    return 0;
}
