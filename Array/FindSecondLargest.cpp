#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int a[], int n)
{
    int l = INT_MIN;
    int sl = INT_MIN;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > l)
        {
            l = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > sl && a[i] != l)
        {
            sl = a[i];
            flag = 1;
        }
    }

    if (flag == 0)
    {
        return -1;
    }

    else if (flag == 1)
    {
        return sl;
    }

    //return -1;
}

int main()
{

    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << findSecondLargest(a, n) << endl;
}