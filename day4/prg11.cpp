/*convert decimal to binary*/
#include <iostream>
using namespace std;
int main()
{
    int n, binary = 0, base = 1;
    cout << "Enter a decimal number:\n";
    cin >> n;

    while (n > 0) {
        int last digit = n % 2;
        binary=binary+rem*base;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       last digit * base;
        n= n/2;
        base=base*10;
    }
     cout << "Binary:\n" << binary << endl;

    return 0;
}
