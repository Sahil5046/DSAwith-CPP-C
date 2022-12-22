#include <iostream>
using namespace std;

struct node
{
    char data;
    struct node *next;
} *top = NULL;

void push(char val)
{
    struct node *t = new node;

    if (t == NULL)
    {
        cout << "Overflow";
    }

    else
    {
        t->data = val;
        t->next = top;
        top = t;
    }
}

int pop()
{
    char x = -1;
    if (top == NULL)
    {
        cout << "Underflow";
    }
    else
    {
        struct node *t = new node;
        x = top->data;
        t = top;
        top = top->next;
        free(t);
    }
    return x;
}

int isBalanced(char *st)
{
    int i;
    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == '(' || st[i] == '{' || st[i] == '[')
        {
            push(st[i]);
        }
        else if (st[i] == ')' || st[i] == '}' || st[i] == ']')
        {
            if (top == NULL)
            {
                return 0;
            }
            else
            {
                pop();
            }
        }
    }
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void display()
{
    node *t = top;

    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
    // cout << endl;
}

int main()
{
    char st[] = "((a+b)*(c-d))";
    display();
    cout << isBalanced(st) << endl;
}