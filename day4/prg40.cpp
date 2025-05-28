/*create a class student that takes name and roll number as constructor parameters and display them using a function*/
#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
public:
    Student(string n, int r) : name(n), rollNumber(r) {}
    void display() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << endl;
    }
};
int main() {
    Student student("kiran", 28);
    student.display();
    return 0;
}
