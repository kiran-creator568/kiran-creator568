/*find the area of rectangle and triangle using class*/
#include<iostream>
using namespace std;
class polygon
{
    protected:
    int length, breadth;
    public:
    void get_data(int l, int b)
    {
        length = l;
        breadth = b;
    }
};
class rectangle:public polygon
{
    public:
    int area()
    {
        return length * breadth;
    }
};
class triangle:public polygon
{
    public:
    int area()
    {
        return (length * breadth) / 2;
    }
};
int main()
{
    rectangle r;
    triangle t;
    int l, b;
    
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    r.get_data(l, b);
    cout << "Area of rectangle: " << r.area() << endl;

    cout << "Enter base and height of triangle: ";
    cin >> l >> b;
    t.get_data(l, b);
    cout << "Area of triangle: " << t.area() << endl;

    return 0;
}