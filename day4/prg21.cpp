/*create a pattern of number and print continous number using for loop*/
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int count = 1; 
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << count << " "; 
            count++;
        } 
        cout << endl; 
    }
    return 0;
}
