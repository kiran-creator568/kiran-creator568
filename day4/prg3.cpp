/*square of n terms*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer:\n ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; ++i)
     {
        sum += i * i;
    }

    cout << "Sum of squares from 1 to " << n << " is\n " << sum << endl;
    return 0;
}