 /**/
 #include <iostream>
    using namespace std;
    int main()
    {
        int num=30;
        int *p;
        p=&num;
        cout<<"address of number variable is:"<<&num<<endl;
        cout<<"address of p variable is:"<<p<<endl;
        cout<<"value of p variable is:"<<*p<<endl;
        return 0;
    }