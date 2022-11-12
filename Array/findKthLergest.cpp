#include <bits/stdc++.h>
using namespace std;

int findKthLargest(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        x = a[n - 1 - k];
    }

    return x;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << findKthLargest(a, n, k) << endl;
}