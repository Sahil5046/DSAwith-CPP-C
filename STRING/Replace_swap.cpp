#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str1 = "Hellohhi";

    string str2 = "programming";

    // str1.erase();     //this will erase all the string;

    // str1.replace(2,3,"kk");    //this will replace from 2 index and 3 no. replaced;

    // str1.pop_back();    //this is remove only last string;

    // str1.push_back('Q');    //push means it will add "Q" at last index;

    str1.swap(str2);

    cout << str1 << endl;
    cout << str2 << endl;
}