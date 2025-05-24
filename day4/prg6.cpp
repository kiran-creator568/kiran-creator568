/*calculate the compound intrest*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float p, r, t, ci;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time in years: ";
    cin >> t;

    ci = p * (pow((1 + r / 100), t) - 1);
    cout << "Compound Interest is: " << ci << endl;

    return 0;
}
