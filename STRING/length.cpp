#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cout << "Enter words : ";
    cin.getline(s, 100);
    cout << "length " << strlen(s) << endl;
}