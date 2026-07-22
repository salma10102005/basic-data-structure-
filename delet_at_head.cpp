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
void insert_at_tail(node* &head , node* &tail, int val)
{
    node* newnode = new node(val);
    if(head == NULL)
{
    head = newnode;
    tail = newnode;
    return;
}
    
    tail -> next = newnode;
    tail = newnode;

}
void deletnode(node* &head)
{
    node* deletnode = head;
    head = head -> next;
    delete deletnode;
}
void print_linked_list(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> val << endl;
        temp = temp -> next ;
    }
}
int main()
{
    node* head = NULL;
    node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head,tail,val);
        }
    }
    deletnode(head);
    print_linked_list(head);

}