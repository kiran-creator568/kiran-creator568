#include<iostream>
class;linearSearch
{
    private:
    int a[10],loc,i,flag,key;
    public:
    void getdata()
    {
        std::cout << "Enter element of array: "<<endl;
        for(i=0;i<10;i++)
        cin>>a[i];
        cout<<"Enter element to be searched: ";<<endl;
        cin>>key;
    }
    void search()
    {
        flag=0;
        for(i=0;i<10;i++)
        {
            if(a[i]==key)
            {
                loc=i;
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"found at position: "<<loc<<endl;
        else
        cout<<"not found"<<endl;
    }
};
int main()
{
    linearSearch obj;
    obj.getdata();
    obj.search();
    return 0;
}