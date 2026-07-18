#include <iostream>
using namespace std;

class AreaCalculator
{
public:
    void area(float r)
    {
        cout << "The area of the circle having radius " << r << " unit is: " << 3.14 * r * r << " unit sqr." << endl;
    }
    void area(float l, float b)
    {
        cout << "The area of the rectangle having length " << l << " unit and width " << b << " unit is: " << l * b << " unit sqr." << endl;
    }
    void area(float l, float w, float h)
    {
        cout << "The area of cube/cuboid having length " << l << " unit and width " << w << " unit and height " << h << " unit is: " << l * w * h << " unit cube." << endl;
    }
};

int main()
{

    AreaCalculator a;

    a.area(15);
    a.area(10, 12);
    a.area(22, 15, 10);

    AreaCalculator a2;
    a2.area(55,20);
    a2.area(12);
    a2.area(12,15,27);

    return 0;
}