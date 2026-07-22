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
void delete_at_tail(node* head,node* tail,int pos)
{
    node* temp = head;
    for(int i = 1; i<pos; i++)
    {
        temp = temp -> next;
    }
    node* deletnode = temp -> next;
    temp -> next = temp ->next ->next;
    delete deletnode;
    tail = temp;

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
    delete_at_tail(head,tail,2);
    print_linked_list(head);

}