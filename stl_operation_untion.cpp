#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20, 10,50,10,60};
    l.remove(10);
    for(int val : l)
    {
        cout << val << " ";
    }
    return 0;
}