#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string text;
    ifstream MyFile("C:\\kiran\\training\\tecinal\\DSA\\sample.text");
    while(getline(MyFile, text))
    cout << text;
    MyFile.close();
    return 0;
}