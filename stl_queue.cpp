#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    // q.push(10);
    // if(!q.empty())
    //     q.pop();
    // if(!q.empty())
    //     q.front();
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