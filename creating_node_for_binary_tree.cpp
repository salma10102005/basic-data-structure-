#include<bits/stdc++.h>
using namespace std;
class node
{
    public :
    int val;
    node* left;
    node* right;
    node (int val)
    {
        this -> val = val;
        this -> left = NULL;
        this ->right = NULL;
    }
};
int main()
{
    node* root = new node(10);
    node* a = new node(10);
    node* b = new node(10);
    node* c = new node(10);
    node* d = new node(10);
    node* e = new node(10);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    return 0;
}
// eikhne kono output ashbe nah just implementation dekhano hoyeche