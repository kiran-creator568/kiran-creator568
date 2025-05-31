/*create a class circle with a private radius and a public function to input the radius calculate the area and display it*/
#include <iostream>
using namespace std;
class Circle 
{
private:
    float radius;
public:
    void inputRadius(float r) 
    {
        radius = r;
    }
    float area() 
    {
        return 3.14 * radius * radius; 
    }
    void displayArea() {
        cout << "Area of the circle: " << area() << endl;
    }
};
int main() 
{
    Circle circle;
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    circle.inputRadius(r);
    circle.displayArea();
    return 0;
}