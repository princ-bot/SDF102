#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

class Game {
public:
    void gameBoard(char gameBoard[]) {
        for (int i = 0; i < 25; i++) {
            gameBoard[i] = '*';
        }
    }

    void treasure(int &treasureLocation) {
        treasureLocation = rand() % 25;
    }

    void showGameBoard(const char gameBoard[]) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << gameBoard[i * 5 + j] << " ";
            }
            cout << endl;
        }
    }

    bool updatePlayerPosition(char gameBoard[], int &playerPosition, int &moveCount, int treasureLocation, char moveDirection) {
        int newPosition = playerPosition;

        gameBoard[playerPosition] = '*';

        if (moveDirection == 'w' && playerPosition >= 5) {
            newPosition -= 5;
            moveCount++;
        } else if (moveDirection == 'a' && playerPosition % 5 != 0) {
            newPosition -= 1;
            moveCount++;
        } else if (moveDirection == 's' && playerPosition < 20) {
            newPosition += 5;
            moveCount++;
        } else if (moveDirection == 'd' && (playerPosition + 1) % 5 != 0) {
            newPosition += 1;
            moveCount++;
        } else {
            return true;
        }

        playerPosition = newPosition;
        cout << "Move: " << moveCount << endl;

        if (playerPosition == treasureLocation) {
            cout << "You found the treasure in " << moveCount << " moves!" << endl;
            gameBoard[playerPosition] = '@';
            showGameBoard(gameBoard);
            return false;
        }

        gameBoard[playerPosition] = '@';
        return true;
      }
};

int main() {
    Game game;
    srand(time(0));

    char gameBoard[25];
    int playerPosition = 12;
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        int moveCount = 0;
        game.gameBoard(gameBoard);
        int treasureLocation;
        game.treasure(treasureLocation);
        gameBoard[treasureLocation] = 'T';
        gameBoard[playerPosition] = '@';

        bool gameInProgress = true;
        while (gameInProgress) {
            game.showGameBoard(gameBoard);
            char moveDirection;
            cout << "Enter w/a/s/d to move or q to quit: ";
            moveDirection = _getch();
            if (moveDirection == 'q') break;
            gameInProgress = game.updatePlayerPosition(gameBoard, playerPosition, moveCount, treasureLocation, moveDirection);
            cout << endl;
        }

        cout << "Would you like to play again? (y/n): ";
        cin >> playAgain;
    }

    return 0;
}
