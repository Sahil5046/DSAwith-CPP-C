
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[10]="Good";
    char s2[20]="Morning";
    
    strcat(s1,s2); //atrncat(s1,s2,4) output-->GoodMorn
    
    cout<<s1<<endl;
}