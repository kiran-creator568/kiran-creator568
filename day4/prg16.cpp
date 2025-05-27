/* array of adding two numbers */
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr1[n], arr2[n], sum[n];
    
    cout << "Enter elements for first array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements for second array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    cout << "Sum of the two arrays:\n";
    for (int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }
    
    return 0;
}
