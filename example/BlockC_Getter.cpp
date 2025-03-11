#include <iostream>
using namespace std;

int add(int x, int y);
int add(int x, int y, int z);
double add(double x, double y);

int multi(int x, int y);
int multi(int x, int y, int z);
double multi(double x, double y);

int subt(int x, int y);
int subt(int x, int y, int z);
double subt(double x, double y);

int main()
{
    cout << "Addition: " << add(5, 5) << endl;
    cout << "Decimal Addition: " << add(5.5, 5.5) << endl;
    cout << "3 Number Addition: " << add(5, 5, 5) << endl;
    cout << "Multiply: " << multi(5, 5) << endl;
    cout << "Decimal Multiply: " << multi(5.5, 5.5) << endl;
    cout << "Subtract: " << subt(5, 5) << endl;
    cout << "Decimal Subtract: " << subt(5.5, 5.5) << endl;
    cout << "3 Number Subtract: " << subt(5, 5, 5) << endl;
}

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

double add(double x, double y)
{
    return x + y;
}

int multi(int x, int y)
{
    return x * y;   
}

int multi(int x, int y, int z)
{
    return x * y * z;
}

double multi(double x, double y)
{
    return x * y;
}

int subt(int x, int y)
{
    return x - y;
}

int subt(int x, int y, int z)
{
    return x - y - z;
}

double subt(double x, double y)
{
    return x - y;
}
