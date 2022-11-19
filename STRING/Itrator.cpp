#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "I am Sahil";

    string::iterator it;

    for ( it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }

    string::reverse_iterator it1;

    for ( it1 = str.rbegin(); it1 != str.rend(); it1++)
    {
        cout << *it1;
    }

}