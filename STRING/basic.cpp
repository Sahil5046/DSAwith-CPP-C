#include <iostream>
using namespace std;

int main()
{

    char s[] = {'h', 'e', 'l', 'l', 'o', '\0', 'p', 'p', 'p'};
    char j[10] = "hello";
    char k[] = {68, 98, 74};
    char *h = "hello";
    string m = "hello";
    cout << k << endl;
    cout << s << endl;
    cout << j << endl;
    cout << h << "\n" << m << endl;
}