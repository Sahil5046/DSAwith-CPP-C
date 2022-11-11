#include <bits/stdc++.h>
using namespace std;

void ans(int *a,int n)
{
    int max = a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        max = a[i];
    }

    cout<<max<<endl;
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ans(a,n);
}