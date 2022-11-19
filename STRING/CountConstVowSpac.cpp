#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string str = "Hi i am Sahil";

    int vcount = 0, scount = 0, count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ( str[i] == 'a' ||  str[i] == 'e' ||  str[i] == 'i' ||  str[i] == 'o' ||  str[i] == 'u' ||  str[i] == 'A' ||  str[i] == 'E' ||  str[i] == 'I' ||  str[i] == 'O' ||  str[i] == 'U')
        {
            vcount++;
        }

        else if ( str[i] != str[i+1] && str[i] == ' ')
        {
            scount++;
        }

        else if (str[i] == str[i+1] && str[i] == ' ')
        {
            continue;
        }

        else
        {
            count++;
        }

    }

    cout << "Number of Vowel is : " << vcount <<endl;

    cout << "Number of Words is : " << scount+1 <<endl;

    cout << "Number of Consonant is : " << count <<endl;

}