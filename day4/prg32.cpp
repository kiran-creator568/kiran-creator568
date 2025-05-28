/**/
#include <iostream>
using namespace std;
class A 
{
    protected:
    int a;
    public:
    void get_a()
    {
        std::cout << "Enter value of a: "<< std::endl;
        cin >> a;
    }
};
class B:class A
{
    protected:
    int b;
    public:
    void get_b()
    {
        std::cout << "Enter value of b: "<< std::endl;
        cin >> b;
    }
};
class C
{
    protected:
    int c;
    public:
    void get_c()
    {
        std::cout << "Enter value of c: "<< std::endl;
        cin >> c;
    }
};
class D:public B,public c
{
    protected:
    int d;
    public:
    void mul()
    {
        get_a();
        get_b();
        get_c();
        std::cout << "multiiplication of a,b,c is: "<<a*b*c<< std::endl;
    }
};
int main()
{
    D d;
    d.mul();
    return 0;
}