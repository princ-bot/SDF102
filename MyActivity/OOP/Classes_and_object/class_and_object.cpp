#include <iostream>
using namespace std;

class Car
{
    public:                 // Access specifier
        string brand;       // Attribute (Data Member)
        string model;       // Attribute (Data Member)
        int year;           // Attribute (Data Member)

        // Method (Member function)
        void displayInfo()
        {    
            cout << brand << "\t\t" << model << "\t\t" << year << endl;
        }
};

int main()
{
    Car car1, car2;             // Create an object of Car

    // Access attribute and set value
    car1.brand = "Toyota";      
    car1.model = "Corolla";
    car1.year = 2020;
    car2.brand = "Porsche";
    car2.model = "911";
    car2.year = 2023;
    
    // Call member function
    cout << "Brand\t\t" << "Model\t\t" << "Year\n";  
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}
