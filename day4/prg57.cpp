/*find the number of vowels in the string*/
#include <iostream>
using namespace std;
int main() 
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    int vowelCount = 0;
    for (char c : str) 
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
        {
            vowelCount++;
        }
    }

    cout << "The number of vowels in the string is: " << vowelCount << endl;

    return 0;
}