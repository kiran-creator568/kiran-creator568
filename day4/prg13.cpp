/*swaping of two variables using arithematic*/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"before swapping a="<<a<<" b="<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"after swapping a="<<a<<" b="<<b<<endl;
    return 0;
}
