/*array of pointers*/
#include <iostream>
using namespace std;
void func1()
{
    int val[3]={5,10,20};
    int *ptr;
    ptr=val;
    cout<<"elements of array are: ";
    cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<endl;
    cout<<ptr<<" "<<val<<" "<<&val<<endl;
    cout<<&ptr;
}
int main(){func1();}