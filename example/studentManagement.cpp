#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

class Student 
{
    private:
        string name;
        int age;
        string studentID;
        int year;

    public:
        Student() : name(""), age(0), studentID(""), year(0) {}
        Student(string studentID, string name, int age, int year) :
            studentID(studentID), name(name), age(age), year(year) {}

        string getName() const 
        {
            return name;
        }
        int getAge() const 
        {
            return age;
        }
        string getStudentID() const 
        {
            return studentID;
        }
        int getYear() const 
        {
            return year;
        }

        void setName(string name) 
        {
            this->name = name;
        }
        void setAge(int age) 
        {
            this->age = age;
        }
        void setStudentID(string studentID) 
        {
            this->studentID = studentID;
        }
        void setYear(int year) 
        {
            this->year = year;
        }
        
        friend istream& operator>>(istream &is, Student &s)
        {
            cout << "Enter Student ID: ";
            is >> s.studentID;

            cout << "Enter Name: ";
            is.ignore();
            getline(is, s.name);

            cout << "Enter Age: ";
            is >> s.age;

            cout << "Enter Year: ";
            is >> s.year;

            return is;
        }

        void displayStudent() const 
        {
            cout << left << setw(15) << studentID
                << left << setw(20) << name
                << left << setw(20) << age
                << left << year << endl;
        }
};

int main() 
{
    const int numStudent = 3;
    Student students[numStudent];
    
    ofstream file("students.txt", ios::app);
    if (!file.is_open())
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    for (int i = 0; i < numStudent; i++)
    {
        cout << "Enter Student detail Info " << (i + 1) << ": " << endl;
        cin >> students[i];

        // Write the input data to the file
        file << students[i].getStudentID() << " "
             << students[i].getName() << " "
             << students[i].getAge() << " "
             << students[i].getYear() << endl;
    }

    cout << setw(15) << "Student ID" << setw(20) << "Name" << setw(20) << "Age" << setw(10) << "Year" << endl;
    for (const auto& student : students) 
    {
        student.displayStudent();
    }

    file.close();

    return 0;
}
