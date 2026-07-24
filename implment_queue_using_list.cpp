#include<bits/stdc++.h>
using namespace std;
class myqueue
{
    public :
    list<int>l;
    void push(int val) // tail a insert kora
    {
        l.push_back(val);
    }
    void pop () // delet at head
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int sz()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }

};
int main()
{
    myqueue q;
    int n;
    cin >> n;
    for(int i = 0; i<n ; i++)
    {
        int val;
        cin >> val;
        q.push(val);

    }
    // cout << q.front() << " " << q.back() << " " 
    while(!q.empty());
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}