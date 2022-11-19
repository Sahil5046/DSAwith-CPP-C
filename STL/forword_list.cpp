#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> v = {10, 20, 30, 40};

    v.push_front(25);
    v.push_front(35);

    v.pop_front();

    // for(int x:v)
    //     cout << x << " ";

    forward_list<int>::iterator itr;

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}