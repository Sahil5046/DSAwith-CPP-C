#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> v = {10, 20, 30, 40};

    v.push_back(25);
    v.push_back(35);

    v.pop_back();

    // for(int x:v)
    //     cout << x << " ";

    list<int>::iterator itr;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}