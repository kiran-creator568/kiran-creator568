/*create a class person with public members name and age. use an object to set values and display them*/
#include <iostream>
using namespace std;
class Person 
{
public:
    string name;
    int age;

    void setData(string n, int a) 
    {
        name = n;
        age = a;
    }

    void display() 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main()
{
    Person p;
    p.setData("aravind", 30);
    p.display();
    return 0;
}