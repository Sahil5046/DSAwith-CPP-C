#include <bits/stdc++.h>
using namespace std;

char lower(char ch)
{
    if (ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
    }
    return ch;
}

int palindrome(string str)
{
    int s = 0;
    int l = str.length() - 1;
    int flag = 0;

    while (s < l)
    {
        if (lower(str[s]) == lower(str[l]))
        {
            s++;
            l--;
            flag = 1;
        }
        else if (str[s] != str[l])
        {
            flag = 0;
            break;
        }

        if (flag == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    string str = "MADAM";

    cout << palindrome(str) << endl;
}