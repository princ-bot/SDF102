#include <iostream>
#include <iomanip>
using namespace std;

struct Student 
{
    string name;
    string course;
    char block;
    int age;
    int year;

    Student(string n, int a, string c, char b, int y) 
        : name(n), age(a), course(c), block(b), year(y) {}
    
    Student() : name(""), age(0), course(""), block(' '), year(0) {}
};

void getInput(Student &pupil);
void printInput(const Student &pupil);

int main() 
{
    const int numStudents = 4;
    Student pupils[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << (i + 1) << ":" << endl;
        getInput(pupils[i]);
    }

    cout << left << setw(20) << "Name" << setw(10) << "Age" << setw(15) << "Course" 
         << setw(10) << "Block" << setw(10) << "Year" << endl;

    for (const auto& pupil : pupils) {
        printInput(pupil);
    }

    return 0;
}

void getInput(Student &pupil)
{
    cout << "Name: ";
    getline(cin, pupil.name);
    cout << "Age: ";
    cin >> pupil.age;
    cout << "Course: ";
    cin >> pupil.course;
    cout << "Block: ";
    cin >> pupil.block;
    cout << "Year: ";
    cin >> pupil.year;
    cin.ignore();
}

void printInput(const Student &pupil)
{
    cout << left << setw(20) << pupil.name << setw(10) << pupil.age << setw(15) 
         << pupil.course << setw(10) << pupil.block << setw(10) << pupil.year << endl;
}
