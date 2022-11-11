#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string str1 = "Happy";

    string str2 = " Birthday";

    cout << str1.front() << endl;

    cout << str1.back() << endl;

    //cout << str2.front() << endl;

    cout << str2.back() << endl;

    cout << str1 + str2 << endl;

    str1 = str2;

    cout << str1 << " " << str2 << endl;

}