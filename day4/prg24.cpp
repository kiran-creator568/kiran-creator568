/*create a pyramid of * using for loop*/
#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) 
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}