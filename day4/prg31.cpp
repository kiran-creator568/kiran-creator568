/**/
#include <iostream>
using namespace std;
class a{
    protected:
    int a;
    public:
    void get_a(int n)
    {
        a = n;
    }
};
class b
{
    protected:
    int b;
    public:
    void get_b(int n)
    {
        b = n;
    }
};
class c : public a, public b
{
    public:
    void display()
    {
        cout<<"value of a is = "<<a<<endl;
        cout<<"value of b is = "<<b<<endl;
        cout<<"Sum = "<<a+b<<endl;
    }
};
int main()
{
    c get;
    get.get_a(10);
    get.get_b(20);
    get.display();
    return 0;
}