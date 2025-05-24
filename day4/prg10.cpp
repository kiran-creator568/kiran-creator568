/*Program to print the digits of a number in reverse order*/
#include <iostream>
using namespace std;
int main()
{
    int n,digit,rev=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    {
        digit=n%10;
        cout<<"digit="<<digit<<endl;
        n=n/10;
        rev=rev*10+digit;
    }
    cout<<"reverse number:"<<rev<<endl;
    return 0;
}