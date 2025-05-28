/*create a class rectangle with private members length and width.add a public function to set values and display the area*/
#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    void setValues(float l, float w) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }

    void displayArea() {
        cout << "Area of the rectangle: " << area() << endl;
    }
};
int main()
{
    Rectangle rect;
    rect.setValues(12, 5);
    rect.displayArea();
    return 0;
}