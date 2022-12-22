#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st)
{
    cout << "Enter size : ";
    cin >> st->size;
    st->top = -1;
    st->s = new int[st->size];
}

void display(struct stack st)
{
    int i;
    for (i = st.size - 1; i >= 0; i--)
    {
        cout << st.s[i] << " ";
    }
}

int push(stack *st, int ele)
{
    if (st->top == st->size - 1)
    {
        cout << "stack overflow";
    }
    else
    {
        st->top++;
        st->s[st->top] = ele;
    }
}

int pop(stack *st)
{
    int x = -1;
    if (st->top == x)
    {
        cout << "stack underflow";
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

int isEmpty(stack *st)
{
    if (st->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(stack *st)
{
    if (st->top == st->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek(stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
    {
        cout << "invalid index" << endl;
    }
    else
    {
        x = st.s[st.top - index + 1];
    }
    return x;
}

int main()
{
    struct stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);

    pop(&st);

    cout << peek(st, 1) << endl;

    display(st);
}