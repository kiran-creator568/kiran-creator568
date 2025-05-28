/*add the elements into the array and find the sum and average*/
#include <iostream>
using namespace std;
int main() 
{
    int n, sum = 0;
    float avg;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = static_cast<float>(sum) / n;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    return 0;
}