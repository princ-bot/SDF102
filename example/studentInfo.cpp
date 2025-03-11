#include <iostream>
using namespace std;

// Properties
struct student {
	string name;
	int age, phoneNumber;
};

int main() {	
	student student1, student2, student3, student4, student5;
	cout << "Enter student 1 info: \n";
	cout << "Name: ";
	cin >> student1.name;
	cout << "Age: ";
	cin >> student1.age;
	cout << "Phone: ";
	cin >> student1.phoneNumber;
	
	cout << "Enter student 2 info: \n";
	cout << "Name: ";
	cin >> student2.name;
	cout << "Age: ";
	cin >> student2.age;
	cout << "Phone: ";
	cin >> student2.phoneNumber;
	
	cout << "Enter student 3 info: \n";
	cout << "Name: ";
	cin >> student3.name;
	cout << "Age: ";
	cin >> student3.age;
	cout << "Phone: ";
	cin >> student3.phoneNumber;
	
	cout << "Enter student 4 info: \n";
	cout << "Name: ";
	cin >> student4.name;
	cout << "Age: ";
	cin >> student4.age;
	cout << "Phone: ";
	cin >> student4.phoneNumber;
	
	cout << "Enter student 5 info: \n";
	cout << "Name: ";
	cin >> student5.name;
	cout << "Age: ";
	cin >> student5.age;
	cout << "Phone: ";
	cin >> student5.phoneNumber;
	
	
	cout << "Student Name\t" << "Student Age\t" << "Student Phone" << endl;
	cout << student1.name << "\t\t" << student1.age << "\t\t" << student1.phoneNumber << endl;
	cout << student2.name << "\t\t" << student2.age << "\t\t" << student2.phoneNumber << endl;
	cout << student3.name << "\t\t" << student3.age << "\t\t" << student3.phoneNumber << endl;
	cout << student4.name << "\t\t" << student4.age << "\t\t" << student4.phoneNumber << endl;
	cout << student5.name << "\t\t" << student5.age << "\t\t" << student5.phoneNumber << endl;
	
}
