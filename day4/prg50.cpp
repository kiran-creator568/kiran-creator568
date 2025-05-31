#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: "<<endl;
    cin >> age;
    try
    {
        if (age<18)
        throw age;
        else
        cout << "access given" << endl;
    }
    catch (int a)
    {
        cout << "access denied:minimum age must be 18,but your age is: " << age << endl;
    }
    return 0;
}