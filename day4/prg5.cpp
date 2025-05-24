/*calculate the simple intrest*/
#include<iostream>
using namespace std;
int main()
{
    float p, r, t, si;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in years: ";
    cin >> t;

    si = (p * r * t) / 100;
    cout << "Simple Interest is: " << si << endl;

    return 0;
}