#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    
    //cin >> str ;
    
    cout << str.capacity() << " " << str.length() <<endl;
    
    str.append(" Sahil, How are you ? ");
    
    cout << str.capacity() << " " << str.length() <<endl;
    
    cout << str << endl;
}