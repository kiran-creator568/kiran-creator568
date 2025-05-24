#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,num;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the number "<<i<<": ";
        cin>>num;
        sum+=num;
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}