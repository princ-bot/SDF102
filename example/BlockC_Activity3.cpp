#include <iostream>
#include <iomanip>

using namespace std;

struct Student {
    string name[10];
    int age[10];
    
    void getInfo() {
        for(int i = 0; i < 10; i++) {
            cout << "Enter Student Info " << (i + 1) << ": " << endl;
            cout << "Name: ";
            getline(cin, name[i]);
            cout << "Age: ";
            cin >> age[i];
            cin.ignore();
        }
    }
    void displayInfo() {
        cout << left << setw(30) << "Name" 
             << setw(10) << "Age" 
             << "Category" 
             << endl;
        cout << "************************************************"  << endl;
        
        for (int i = 0; i < 10; i++) {
            cout << left << setw(30) << name[i] 
                 << setw(10) << age[i] 
                 << ageCategory(age[i]) 
                 << endl;
        }
    }
    
    string ageCategory(int age) {
        return (age >= 2 && age <= 12 ? "Kid" : 
                age >= 10 && age <= 19 ? "Teen" : 
                age >= 20 && age <= 39? "Adult" : 
                age >= 40 && age <= 59 ? "Old" : 
                "Senior Citizen"); 
    }

    void interface() {
        cout << "***** Student Info *****" << endl;
        getInfo();
        displayInfo();
        cout << "**************************************" << endl;
    }
};

int main() {
    Student student;
    student.interface();
}
