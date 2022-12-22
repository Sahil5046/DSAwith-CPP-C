#include <iostream>
#include <climits>

using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void create(int a[], int n)
{
    struct node *t, *last;
    head = new node;
    head->data = a[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int max(struct node *p)
{
    int m = INT_MIN;
    while(p != NULL)
    {
        if(m < p->data)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

// int max(struct node *p) // using Recursion
// {
//     int x = 0;
//     if (p == NULL)
//     {
//         return INT_MIN;
//     }
//     // else
//     // {
//     //     x = max(p->next);

//     //     if(x  > p->data)
//     //     {
//     //         return x;
//     //     }
//     //     else
//     //     {
//     //         return p->data;
//     //     }
//     // }
//     x = max(p->next);
//     return x > p->data ? x : p->data;
// }

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    create(a, n);
    cout << max(head);
}
