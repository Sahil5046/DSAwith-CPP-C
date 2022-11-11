
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[20]="Programming";
    cout<<strchr(s1,'g')<<endl; //it takes left sides element
    cout<<strchr(s1,'r')<<endl;
    cout<<strrchr(s1,'g')<<endl; //it takes right sides element
    cout<<strrchr(s1,'r')<<endl;
}