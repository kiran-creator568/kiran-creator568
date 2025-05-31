/*create a pgm to check the given chracter is vowel or not take data from user */
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << "The character '" << ch << "' is a vowel." << endl;
    }
    else
    {
        cout << "The character '" << ch << "' is not a vowel." << endl;
    }

    return 0;
}


