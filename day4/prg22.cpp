/*create a pattern of number and print continous a,b,c,d using for loop*/
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    char count = 'A'; 
    
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