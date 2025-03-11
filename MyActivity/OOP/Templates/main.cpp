#include <iostream>
using namespace std;

template<typename T>
class Box 
{
    private:
        T content;
    public:
        Box(T c) : content(c) {}

        T getContent() const
        {
            return content;
        }
};

int main()
{
    Box<int> intBox(123);
    Box<string> stringBox("Hello, World!");

    cout << "Int box contains: " << intBox.getContent() << endl;
    cout <<"String Box contains: " << stringBox.getContent() << endl;

    return 0;
}
