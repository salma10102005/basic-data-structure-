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
node* input_tree()
{
    int val;
    cin >> val;
    node* root;
    if(val == -1) root = NULL;
    else root = new node(val);
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* p = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        node* myleft , *myright;
        if(l == -1) myleft = NULL;
        else myleft = new node(l);
        if(r == -1) myright = NULL;
        else myright = new node(r);
        p->left = myleft;
        p -> right = myright;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;

}
int max_height(node* root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r) + 1;
}

int main()
{
    node* root = input_tree();
    cout << max_height(root);
    return 0;
}