#include <iostream>
#include <iomanip>
using namespace std;

class Student {
    private:
        string name[3];
        int age[3];
    public:
        void getInfo() {
             for (int i = 0; i < 3; i++) {
                cout << "Enter student info " << (i + 1) << ": " << endl;
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
             for (int i = 0; i < 3; i++) {
                cout << left << setw(30) << name[i]
                     << setw(10) << age[i]
                     << ageCategory(age[i]) << endl;
             }
        }

        string ageCategory(int age) {
            return (age >= 2 && age <= 12 ? "Kid" :
                    age >= 10 && age <= 19 ? "Teen" :
                    age >= 20 && age <= 39 ? "Adult" :
                    age >= 40 && age <= 59 ? "Old" :
                    "Senior Citizen");
        }

        void interface() {
            cout << "********** Student Info **********" << endl;
            getInfo();
            displayInfo();
            cout << "**********************************" << endl;
        }
};   

int main() {
    Student student;
    student.interface();
    return 0;
}
