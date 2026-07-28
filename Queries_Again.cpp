#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

Node *head = NULL;
Node *tail = NULL;
int sz = 0;

void print_forward()
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward()
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_head(int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    sz++;
}

void insert_tail(int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    sz++;
}

void insert_any(int idx, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    newNode->prev = tmp;

    tmp->next->prev = newNode;
    tmp->next = newNode;

    sz++;
}

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }

        if (idx == 0)
        {
            insert_head(val);
        }
        else if (idx == sz)
        {
            insert_tail(val);
        }
        else
        {
            insert_any(idx, val);
        }

        print_forward();
        print_backward();
    }

    return 0;
}