/*create a class employee and make three objects. store and display data for three different employees using each object*/
#include <iostream>
using namespace std;
class Employee {
public:
    int id;
    string name;
    float salary;

    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    void display() {
        cout << "ID: " << id << "   Name: " << name << "   Salary: " << salary << endl;
    }
};
int main() {
    Employee emp1(101, "bguergv", 50000);
    Employee emp2(102, "awgdbc", 60000);
    Employee emp3(103, "Cdbfhrfd", 70000);

    cout << "Employee 1: ";
    emp1.display();
    cout << "Employee 2: ";
    emp2.display();
    cout << "Employee 3: ";
    emp3.display();

    return 0;
}