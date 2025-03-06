#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GuessingGame 
{
    private:
        int number;
    public:
        GuessingGame() {
            srand(time(0));
            number = rand() % 100 + 1;
        }

        void guess()
        {
            int input;
            cout << "Guess a number\n";
            do 
            {
                cin >> input;
                if (input > number)
                {
                    cout << "Lower\n";
                }
                else if (input < number)
                {
                    cout << "Higher\n";
                }
            }
            while (input != number);
            cout << "Nice!\n";
        }

};

int main()
{
    GuessingGame game;
    game.guess();
}
