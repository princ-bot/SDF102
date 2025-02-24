#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void setUpGameBoard(char gameBoard[]) {
    for (int cellIndex = 0; cellIndex < 25; cellIndex++) {
        gameBoard[cellIndex] = '*';
    }
}

void hideTreasure(int &treasureLocation) {
    treasureLocation = rand() % 25;
}

void showGameBoard(const char gameBoard[]) {
    for (int row = 0; row < 5; row++) {
        for (int column = 0; column < 5; column++) {
            cout << gameBoard[row * 5 + column] << " ";
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

int main() {
    srand(time(0));

    char gameBoard[25];
    int playerPosition = 12;
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        int moveCount = 0;
        setUpGameBoard(gameBoard);
        int treasureLocation;
        hideTreasure(treasureLocation);
        gameBoard[treasureLocation] = 'T';
        gameBoard[playerPosition] = '@';

        bool gameInProgress = true;
        while (gameInProgress) {
            showGameBoard(gameBoard);
            char moveDirection;
            cout << "Enter w/a/s/d to move or q to quit: ";
            cin >> moveDirection;
            if (moveDirection == 'q') break;
            gameInProgress = updatePlayerPosition(gameBoard, playerPosition, moveCount, treasureLocation, moveDirection);
            cout << endl;
        }

        cout << "Would you like to play again? (y/n): ";
        cin >> playAgain;
    }

    return 0;
}
