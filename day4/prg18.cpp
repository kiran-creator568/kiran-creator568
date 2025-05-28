/*array of multiplying two numbers using two dimensional array*/
#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr1[n][n], arr2[n][n], product[n][n];
    
    cout << "Enter elements for first array:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements for second array:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
        {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
                product[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "Product of the two arrays:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
        {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}