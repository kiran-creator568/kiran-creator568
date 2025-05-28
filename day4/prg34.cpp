/**/
#include <iostream>
using namespace std;
class employee
{
    public:
    employee()
    {
        cout<<"default constructor invoked"<<endl;
    }
    ~employee()
    {
        cout<<"destructor evoked"<<endl;
    }
};
int main(void)
{
    cout<<"in main func\n";
    cout<<"1st object\n";
    employee e1;
    cout<<"2nd object\n";
    employee e2;
    cout<<"end main func\n";
    return 0;
}