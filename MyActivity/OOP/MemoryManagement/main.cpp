#include <iostream>
using namespace std;

int maim()
{
    int* p = new int(10);

    cout << "Value: " << *p << endl;

    delete p;

    int* arr = new int[5];
    
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 10;
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    
    return 0;
}
