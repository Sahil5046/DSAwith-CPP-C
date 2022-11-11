#include <iostream>
using namespace std;

int main()
{
    char s[20];
    cout << "Enter your name ";
    cin.get(s, 20);
    cout << s << endl;

    cin.ignore();

    char s1[30];
    cout << "Enter your name again ";
    cin.getline(s1, 30);
    cout << s1 << endl;
}