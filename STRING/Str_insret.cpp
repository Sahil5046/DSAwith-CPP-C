#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Hello";
    
    //cin >> str ;
    
    cout << str.capacity() << " " << str.length() <<endl;
    
    str.insert(3,"sahil",3);
    
    cout << str.capacity() << " " << str.length() <<endl;
    
    cout << str << endl;
}