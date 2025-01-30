#include <iostream>
#include <vector>
#include <string>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

using namespace std;

void ClearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void main_menu();
void Categories(struct Player& player);
void Instruction();

struct Question {
    string question;
    vector<string> option;
    char answer;
};

struct Player {
    int score = 0;
    int incorrect = 0;
};

void DisplayScore(const struct Player& player) {
    ClearScreen();
    if (player.incorrect >= 3) {
        cout << "Game over! You lose\n";
        cout << "You scored: " << player.score << endl;
    } else {
        cout << "Congratulations! You won\n";
        cout << "You scored: " << player.score << endl;
    }
}

void askQuestions(vector<Question>& questions, Player& player) {
    for (const auto& question : questions) {
        ClearScreen();
        cout << question.question << endl;
        for (const auto& option : question.option) {
            cout << option << endl;
        }

        char player_answer;
        cout << "Answer: ";
        cin >> player_answer;

        if (player_answer == question.answer) {
            player.score += 1;
        } else {
            player.incorrect += 1;
            if (player.incorrect >= 3) {
                cout << "Game Over!\n";
                DisplayScore(player);
                return;
            }
        }
    }
    DisplayScore(player);
}

void CyberSecurity(vector<Question>& questions, struct Player& player) {
    questions.push_back({
        "Which of the following is a common type of cyber attack where the attacker sends a fraudulent email to trick the recipient into revealing sensitive information?",
        {"a. Phishing", "b. Ransomware", "c. Denial-of-Service"},
        'a'
    });
    questions.push_back({
        "What is the purpose of a firewall in a computer network?",
        {"a. To increase internet speed", "b. To block unauthorized access while permitting authorized communication", "c. To scan for viruses"},
        'b'
    });
    questions.push_back({
        "What is multi-factor authentication (MFA)?",
        {"a. A method to store multiple passwords in one place", "b. A security system that requires multiple forms of verification to access an account", "c. A tool for encrypting files"},
        'b'
    });
    questions.push_back({
        "What is a VPN?",
        {"a. Virtual Private Network", "b. Very Private Network", "c. Virtual Protected Network"},
        'a'
    });
    questions.push_back({
        "What does the term 'encryption' mean in the context of cybersecurity?",
        {"a. The process of converting information into a code to prevent unauthorized access", "b. The act of scanning files for viruses", "c. The method of remembering passwords securely"},
        'a'
    });

    cout << "----- CyberSecurity -----\n";
    askQuestions(questions, player);

    char play_again;
    cout << "Play again? Type y = yes or n = no\n";
    cin >> play_again;

    if (play_again == 'y') {
        ClearScreen();
        Player new_player = {0, 0};
        Categories(new_player);
    } else {
        cout << "Thank you for playing...";
    }
}

void History(vector<Question>& questions, struct Player& player) {
    questions.push_back({
        "Who is known as the Father of Computer Science?",
        {"a. Steve Jobs", "b. Alan Turing", "c. Bill Gates", "d. Charles Babbage"},
        'b'
    });
    questions.push_back({
        "What was the name of the first electronic general-purpose computer?",
        {"a. ENIAC", "b. UNIVAC", "c. IBM 701", "d. Altair 8800"},
        'a'
    });
    questions.push_back({
        "Who is credited with creating the first algorithm intended to be carried out by a machine?",
        {"a. Ada Lovelace", "b. Alan Turing", "c. John von Neumann", "d. Grace Hopper"},
        'a'
    });
    questions.push_back({
        "What was the primary purpose of ARPANET, the precursor to the internet?",
        {"a. To allow users to share music files", "b. To provide a communication network for researchers", "c. To host online gaming", "d. To send commercial emails"},
        'b'
    });
    questions.push_back({
        "Which programming language, developed in the 1950s, is one of the oldest high-level programming languages still in use today?",
        {"a. Python", "b. Fortran", "c. Java", "d. C++"},
        'b'
    });

    cout << "----- History in Computer Science -----\n";
    askQuestions(questions, player);

    char play_again;
    cout << "Play again? Type y = yes or n = no\n";
    cin >> play_again;

    if (play_again == 'y') {
        ClearScreen();
        Player new_player = {0, 0};
        Categories(new_player);
    } else {
        cout << "Thank you for playing...";
    }
}

void Categories(struct Player& player) {
    ClearScreen();
    char player_choice;
    do {
        cout << "----- Who wants to be a Millionaire ------\n";
        cout << "Select a Category\n";
        cout << "1. CyberSecurity\n";
        cout << "2. History\n";
        cout << "Select: ";
        cin >> player_choice;

        if (player_choice != '1' && player_choice != '2') {
            cout << "Invalid choice. Please select 1 or 2.\n";
        }
    } while (player_choice != '1' && player_choice != '2');

    vector<Question> questions;

    if (player_choice == '1') {
        CyberSecurity(questions, player);
    } else if (player_choice == '2') {
        History(questions, player);
    }
}

void Instruction() {
    ClearScreen();
    cout << "----- Instruction -----\n";
    cout << "Read the questions carefully and answer.\n";
    cout << "Three wrong answers result in a loss.\n";
}

void main_menu() {
    ClearScreen();
    char player_selection;
    cout << "----- Who wants to be a Millionaire -----\n";
    cout << "1. Start Game\n";
    cout << "2. Instruction\n";
    cout << "3. Exit\n";
    cout << "Select: ";
    cin >> player_selection;

    Player player;

    if (player_selection == '1') {
        Categories(player);
    } else if (player_selection == '2') {
        Instruction();
    }
}

int main() {
    main_menu();
    return 0;
}
