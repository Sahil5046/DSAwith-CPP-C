#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s = "How are you";
    string s1 = "Hello, how are you";

    string str = "sahil";

    char st[10];

    // str.copy(st,str.length());

    str.copy(st, 3);
    st[3] = '\0';

    cout << st << endl;

    cout << s.find("o") << endl;
    cout << s.rfind("o") << endl;

    cout << s1.find_first_of("l") << endl;
    cout << s1.find_last_of("l") << endl;
}