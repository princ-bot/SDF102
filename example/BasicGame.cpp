#include <iostream>
using namespace std;

int main() {
	int player;
	cout << "1. Start Game\n";
	cout << "2. View Menu\n";
	cout << "3. Exit Game\n";
	cout << "Select: ";
	cin >> player;

	switch(player) {
		case 1:
			cout << "Game starting...Good luck!";
			break;
		case 2:
			cout << "Use ASWD to move and Space to Jump";
			break;
		case 3:
			cout << "Game exit...Thank you!";
			break;
		default:
			cout << "Invalid Choices.. please try again";
	}
}
