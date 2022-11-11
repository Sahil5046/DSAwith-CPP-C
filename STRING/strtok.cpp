#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s1[20]="15+5=20+2";
    char *ptr=strtok(s1,"="); //string tokenizer ---> it returns the next tokenizer . strtok() --> it is a static variable;
    
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr=strtok(NULL,"+"); //it requires a null pointer .
    }
    
}