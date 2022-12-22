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

node *insert(struct node *p, int val, int pos)
{
    node *NewNode;

    if (pos == 0)
    {
        NewNode = new node;
        NewNode->data = val;
        NewNode->next = head;
        head = NewNode;
    }

    else if (pos > 0)
    {
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        NewNode = new node;
        NewNode->data = val;
        NewNode->next = p->next;
        p->next = NewNode;
    }
    return p;
}

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
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

    int value;
    cin >> value;

    int pos;
    cin >> pos;

    create(a, n);
    insert(head, value, pos);
    display(head);
}
