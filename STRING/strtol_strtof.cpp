#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[20] = "345";
    char s2[20] = "54.75";

    // srting to long intger
    long int x = strtol(s1, NULL, 10); // 345 is a decimal number so, we use 10. if integer number so,we use 2.

    // string to float.
    float y = strtof(s2, NULL);

    cout << x << "\n" << y << endl;
}