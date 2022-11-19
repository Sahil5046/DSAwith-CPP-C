#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> v = {10, 20, 30, 40};

    v.insert(25);
    v.insert(35);

    

    // for(int x:v)
    //     cout << x << " ";

    set<int>::iterator itr;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}