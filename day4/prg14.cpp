/*convert binary to decimal*/
#include <iostream>
using namespace std;
int main()
{
    int n, decimal = 0, base = 1, rem;
    cout << "Enter a binary number:\n";
    cin >> n;

    while (n > 0)
    {
        int last digit = n % 10;
        decimal=decimal+rem*base;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       last digit * base;
        n= n/10;
        base=base*2;
    }
    cout << "Decimal:\n" << decimal << endl;
    return 0;
}