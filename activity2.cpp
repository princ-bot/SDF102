#include <iostream>
#include <conio.h>
using namespace std;

// Formula
// index = x * 5 + y

int main() {
    char grid[25] = {
        '*', '*', '*', '*', '*',
        '*', '*', '*', '*', '*',
        '*', '*', '*', '*', '*',
        '*', '*', '*', '*', '*', 
        '*', '*', '*', '*', '*'
    };

    grid[12] = '@';

    char control;
    int position = 12;

    do {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << grid[i * 5 + j] << " ";
            }
            cout << endl;
        }

        cout << "Enter w/a/s/d or q to quit: ";
        control = _getch();

        if (control != 'q') {
            grid[position] = '*';

            if (control == 'w') {
                if (position - 5 >= 0) {
                    position -= 5;
                }
            } else if (control == 'a') {
                if (position - 1 >= 0) {
                    position -= 1;
                }
            } else if (control == 's') {
                if (position + 5 <= 24) {
                    position += 5;
                }
            } else if (control == 'd') {
                if (position + 1 <= 24) {
                    position += 1;
                }
            }

            grid[position] = '@';
        }
        cout << endl;
    } while (control != 'q');
    return 0;
}
