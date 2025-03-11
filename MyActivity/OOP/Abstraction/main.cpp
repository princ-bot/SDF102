#include <iostream>
using namespace std;

// Abstact class
class Shape
{
    public:
        // Pure virtual function
        virtual void draw() const = 0;

        // Virtual destructor
        virtual ~Shape() {}
};

class Circle : public Shape
{
    public:
        void draw() const override
        {
            cout << "Drawing a circle.\n";
        }
};

class Rectangle :  public Shape
{
    public:
        void draw() const override
        {
            cout << "Drawing a rectangle.\n";
        }
};

int main()
{
    // Create object through class pointers
    Shape* shapes[] = {new Circle(), new Rectangle() };

    for (Shape* shape : shapes)
    {
        shape->draw();
    }

    for (Shape* shape : shapes)
    {
        delete shape;
    }

    return 0;
}
