#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>

using namespace std;

class CoinTossGame {
    private:
        int player, player_score = 0, npc_score = 0;

        map<int, string> coin() {
            return {{1, "Head"}, {2, "Tail"}};
        }

        void game() {
            for (int i = 0; i < 5; i++) {
                int npc = (rand() * rand() * rand()) % 2 + 1;
                cout << "Computer: " << coin()[1] << " or " << coin()[2] << endl;
                cout << "Computer: Press [1] for " << coin()[1] << " or " << "[2] for " << coin()[2] << endl;
                cout << ": ";
                cin >> player;
                cout << endl;

                if (player == npc) {
                    cout << "Computer: It's " << coin()[npc] << endl;
                    cout << "Computer: Nice!" << endl;
                    player_score++;
                } else {
                    cout << "Computer: It's " << coin()[npc] << endl;
                    cout << "Computer: Try again!" << endl;
                    npc_score++;
                }
                cout << endl;

                if (player_score >= npc_score) {
                    cout << "Computer: You got " << player_score << endl;
                    cout << "Computer: You win Congratulation!" << endl;
                } else {
                    cout << "Computer: You only guess " << player_score << " of them" << endl;
                    cout << "Computer: Better luck next time!" << endl;
                }
            }
        }

    public:
        void display() {
            game();
        }

};

int main() {
    srand(time(0));
    CoinTossGame game;
    game.display();

}
