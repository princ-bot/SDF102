#include <iostream>
#include <windows.h>

using namespace std;

void ClearScreen()
{
    system("cls");
}

class Question
{
    public:
        void display_question()
        {
            cout << "Asdasda";
        }
}

int main()
{
    Question history_question;
    history_question.display_quesiton();
}
