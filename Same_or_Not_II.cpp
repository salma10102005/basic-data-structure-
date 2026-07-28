#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// Stack Implementation
class Stack
{
public:
    Node *head;
    int sz;

    Stack()
    {
        head = NULL;
        sz = 0;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        sz++;
    }

    void pop()
    {
        if (head == NULL)
            return;

        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        sz--;
    }

    int top()
    {
        return head->val;
    }

    bool empty()
    {
        return head == NULL;
    }

    int size()
    {
        return sz;
    }
};

// Queue Implementation
class Queue
{
public:
    Node *head;
    Node *tail;
    int sz;

    Queue()
    {
        head = tail = NULL;
        sz = 0;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (tail == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        sz++;
    }

    void pop()
    {
        if (head == NULL)
            return;

        Node *deleteNode = head;
        head = head->next;

        if (head == NULL)
            tail = NULL;

        delete deleteNode;
        sz--;
    }

    int front()
    {
        return head->val;
    }

    bool empty()
    {
        return head == NULL;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Stack st;
    Queue q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO";
            return 0;
        }

        st.pop();
        q.pop();
    }

    cout << "YES";

    return 0;
}