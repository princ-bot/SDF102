#include <iostream>
using namespace std;

class Gcash {
    private:
        double balance = 0.0;
    public:
        void initial_balance(double initialBalance) {
            balance = initialBalance;
        }

        void show_balance() {
            cout << "Balance: " << balance << endl;
    }

        void cash_in(double amount) {
            cout << "Current Balance: " << balance << endl;
            balance += amount;
            cout << "New Balance: " << balance << endl;
        }

        void cash_out(double amount) {
            cout << "Current Balance: " << balance << endl;
            balance -= amount;
            cout << "Deducted: -" << balance << endl;
        }
};

int main() {
    Gcash account;
    double amount;
    int choose;
    do {
        cout << "1. Show Balance\n" << "2. Cash in\n" << "3. Cash out\n" << "4. Exit\n";
        cout << "Select: ";
        cin >> choose;

        switch (choose) {
            case 1:
                account.show_balance();
                break;
            case 2:
                cout << "Amount: ";
                cin >> amount;
                account.cash_in(amount);
                break;
            case 3:
                cout << "Amount: ";
                cin >> amount;
                account.cash_out(amount);
                break;
        }

    } while (choose != 4);
    return 0;
}
