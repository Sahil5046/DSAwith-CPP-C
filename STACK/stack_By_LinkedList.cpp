#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class stack
{
    Node *top;
    public:
    stack()
    {
        top = NULL;
    }

    void push(int data);
    int pop();
    void display();

};

void stack::push(int data)
{
    Node *t = new Node;

    if(t == NULL)
    {
        cout << "Overflow";
    }
    else
    {
        t->data = data;
        t->next = top;
        top = t;
    }
}

int stack::pop()
{
    Node *t = new Node;
    int x = -1;
    if(top == NULL)
    {
        cout << "Underflow";
    }
    else
    {
        x = top->data;
        t = top;
        top = top->next;
        free(t);
    }
}

void stack::display()
{
    Node *t = top;
    while(t)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

int main()
{
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    st.pop();

    st.display();
}