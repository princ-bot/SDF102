#include <iostream>
#include <iomanip>
using namespace std;

class Grade {
    private:
        string courseCode;
        string name;
        string instructor;
        string finalGrade;
        string equivalentGrade;
    public:
        Grade(string courseCode, string name, string instructor, string finalGrade, string equivalentGrade) {
            this->courseCode = courseCode;
            this->name = name;
            this->instructor = instructor;
            this->finalGrade = finalGrade;
            this->equivalentGrade = equivalentGrade;
        }

        string getCourseCode() {
            return courseCode;
        }

        string getCourseName() {
            return name;
        }

        string getInstructorName() {
            return instructor;
        }

        string getFinalGrade() {
            return finalGrade;
        }

        string getEquivalentGrade() {
            return equivalentGrade;
        }

        void setCourseCode(string code) {
            this->courseCode = code;
        }

        void setCourseName(string name) {
            this->name = name;
        }

        void setInstructorName(string name) {
            this->instructor = name;
        }

        void setFinalGrade(string grade) {
            this->finalGrade = grade;
        }

        void setEquivalentGrade(string grade) {
            this->equivalentGrade = grade;
        }
        
        void displayGrade() const{
            cout << left << setw(15) << courseCode 
                 << left << setw(25) << name 
                 << left << setw(25) << instructor 
                 << left << setw(15) << finalGrade 
                 << left << setw(20) << equivalentGrade << endl;
        }         

};

int main() {
    Grade grades[] = {
        Grade("GE5", "Purposive Communication", "To Be Arranged", "88", "1.75"),
        Grade("ITE102", "ICT Fundamentals", "To Be Arranged", "", ""),
        Grade("CC 102", "Fundamentals..", "To Be Arranged", "", ""),
        Grade("GE 1", "Understanding the self", "To Be Arranged", "84", "2.25"),
        Grade("GE 4", "Mathematics...", "To Be Arranged", "", "89"),
        Grade("ITE101", "PC Trouble..", "To Be Arranged", "93", "1.50"),
        Grade("CC101", "Introdu...", "To Be Arranged", "", "")
    };
    
    cout << left << setw(15) << "Course Code"
        << left << setw(25) << "Name"
        << left << setw(25) << "Instructor"
        << left << setw(15) << "Final Grade"
        << left << setw(20) << "Equivalent Grade" << endl;

    for (const auto& grade : grades) {
        grade.displayGrade();
    }
}
