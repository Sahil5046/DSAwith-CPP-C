#include <iostream>

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

int display(struct node *p)
{
    int count = 0;
    while (p != NULL)
    {
        // cout << p->data << " ";
        count++;
        p = p->next;
    }
    cout << count << endl;
}

// int display(struct node *p) // using Recursion
// {

//     if (p == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return display(p->next) + 1;
//     }
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
    cout << display(head);
}
