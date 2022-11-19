#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string str = "sahilsk03860@gmail.com"; 
    
    /*int x = 0;
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if( str[i] == '@' )
        {
            x = i;
        }
    }
    
    for(int i = 0; i < x; i++)
    {
        cout << str[i];
    }*/
    
    //another way.
    
    int x = str.find('@');
    
    string substr = str.substr(0,x);
    
    cout << substr;
    
}