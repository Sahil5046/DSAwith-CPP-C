
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[20]="Programming";
    char s2[10]="m"; //char s2[10]="k" -->Not found;
    
    if(strstr(s1,s2)!=NULL){
        cout<<strstr(s1,s2)<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}