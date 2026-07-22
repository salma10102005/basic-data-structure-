#include<bits/stdc++.h>
using namespace std;
class node
{
    public :
    int val;
    node* next;
    node (int val)
    {
        this -> val = val;
        this -> next = NULL;
    }
};
int main()
{
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    head-> next = a;
    a -> next = b;
    c -> next = c;

    // cout << head-> val << endl;
    // cout << head -> next -> val << endl;
    // cout << head -> next -> next -> val << endl;
    // cout << head -> next -> next -> next -> val << endl;
    // or
    // while(head != NULL) //eita te head cholte cholte null a chole jay pore head access kora jay nh
    // {
    //     cout << head -> val << endl;
    //     head = head -> next;
    // }
    // or
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> val << endl;
        temp = temp -> next ;
    }
    return 0;
}