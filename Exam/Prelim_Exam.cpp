#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>
#include <conio.h>
using namespace std;

class Exam {
    private:
        int player;
        int npc = rand() % 3 + 1;
        map<int, string> RPS = {
            {1, "ROCK"},
            {2, "PAPER"},
            {3, "SCISSOR"}
        };
        
        void RPSlogic() {
            if (player == npc) {
                cout << "It's a tie!" << endl;
            } else if (player == 1 && npc == 3 || player == 2 && npc == 1 || player == 3 &&npc == 2) {
                cout << "You win!" << endl;
            } else if (player == 3 && npc == 1 || player == 2 && npc == 3 || player == 1 && npc == 2){
                cout << "You lose!" << endl;
            }
        }
        
        void interface() {
              char input;
              do {
                    cout << "[1] - ROCK" << endl
                         << "[2] - PAPER" << endl
                         << "[3] - SCISSOR" << endl
                         << "[4] - EXIT" << endl;
                    input = _getch();
                    cout << endl;

                    player = input - '0';
                    cout << endl;

                    if (player == 4) {
                        cout << "Exiting the game. Goodbye!" << endl;
                        break;
                    }
                    npc = rand() % 3 + 1;
                    cout << "Player: " << RPS[player] << endl;
                    cout << "Computer: " << RPS[npc] << endl;
                    RPSlogic();
                    cout << endl;
                } while (true);
}

     public:
        void display() {
            interface(); 
        } 
};

int main() {
    srand(time(0));
    Exam exam;
    exam.display();
}
