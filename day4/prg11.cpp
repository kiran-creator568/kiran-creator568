/*convert decimal to binary*/
#include <iostream>
using namespace std;
int main()
{
    int n, binary = 0, base = 1;
    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0) {
        int last_digit = n % 2;
        binary += last_digit * base;
        n /= 2;
        base *= 10;
    }

    cout << "Binary:" << binary << endl;

    return 0;
}
