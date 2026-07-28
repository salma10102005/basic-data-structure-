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
void postorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);       // left
    postorder(root->right);      // right
    cout << root->val << " ";       // root
    
}
int main()
{
    node* root = new node(1);
    node* a = new node(2);
    node* b = new node(3);
    node* c = new node(4);
    node* d = new node(5);
    node* e = new node(6);
    // for khatar second diagram;
    node* f = new node(7);
    node* g = new node(8);
    node* h = new node(9);
    node* i = new node(10);

    root->left = a;
    root->right = b;
    a->left = c;
    // b->left = d;
    // b->right = e;
    // eto tuku obdhi diagram 1;
    a->right = d;
    d->left = g;
    b->left = e;
    b->right = f;
    f->left = h;
    f->right = i;
    postorder(root);
    return 0;
} 