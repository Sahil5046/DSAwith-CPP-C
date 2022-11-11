
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[20]="Hello";
    char s2[20]="Hello";
    cout<<strcmp(s1,s2)<<endl; //strcmp ------>string compare accourding to dictionary  if both are same return 0;
    
    char s3[20]="hello";
    char s4[20]="Hello";
    cout<<strcmp(s3,s4)<<endl; //if 1'st lower case and 2'nd upper case so return +ve
    
    char s5[20]="Hello";
    char s6[20]="hello";
    cout<<strcmp(s5,s6)<<endl; //if 1'st upper case and 2'nd lower case so return -ve
    
    char s7[20]="mimma";
    char s8[20]="bappa";
    cout<<strcmp(s7,s8)<<endl;
    
}