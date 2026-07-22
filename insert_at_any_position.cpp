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
void insert_at_any_position(node* head, int indx , int val)
{
    node* newnode = new node(val);
    node* temp = head ;
    for(int i = 1; i<indx ; i++)
    {
        temp = temp -> next;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;

}
void print_linked_list(node* head)
{
    node* temp = head ;
    while(temp != NULL)
    {
        cout << temp -> val << endl;
        temp = temp -> next ;
    }
}
int main()
{
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);

    head -> next = a;
    a -> next = b;
    insert_at_any_position(head,1,100);
    insert_at_any_position(head,1,40);
    print_linked_list(head);
    return 0;
}