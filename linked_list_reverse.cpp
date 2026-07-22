// #include<bits/stdc++.h>
// using namespace std;
// void rec(int i, int n)
// {
//     while(i>n) // base case
//     {
//         return;
//     }
//     // cout << i << " " << endl; // eikhne print korle soja ashbe
//     rec(i+1,n);
//     cout << i << " " << endl; // eikhne korle ulta
// }
// int main()
// {
//     int n = 5;
//     rec(1,n);
//     return 0;
// }
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
    // node* temp = head;
    // while(temp ->next != NULL)
    // {
    //    temp =  temp -> next;
    // }
    tail -> next = newnode;
    tail = newnode;

}

void print_reverse(node* temp)
{
    while(temp == NULL)
    {
        return;
    }
    print_reverse(temp -> next);
    cout << temp -> val << endl;
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
    print_reverse(head);

}