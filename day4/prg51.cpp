/**/
#include <iostream>
using namespace std;
int main()
{
    int num,den;
    cout<<"enter two numbers: "<<endl;
    cin>>num>>den;
    try
    {
        if(den==0)
            throw den;
        else
            cout<<num/den<<endl;
    }
    catch(int d)
    {
        cout<<"division by zero error: cannot divide by zero "<<d<<endl;
    }
    return 0;
}