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

node *search(struct node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

// node* search(struct node *p,int key)        //Using Recusion
// {
//     if(p == NULL)
//     {
//         return NULL;
//     }
//     else if(key == p->data)
//     {
//         return p;
//     }
//     else
//     {
//         return search(p->next,key);
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

    int key;
    cin >> key;

    create(a, n);
    cout << search(head, key);
}
