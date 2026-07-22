#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {1,2,3,4,5,2,8,2};
    // vector<int> v2 = {100,200,300} ;
    //v.insert(v.begin()+2,100); // ekta value insert
    // v.insert(v.begin()+2,v2.begin(),v2.end()); // pura value insert eker odhik
    //replace start
    // replace(v.begin(), v.end(),2,30);
    auto it = find(v.begin(), v.end(), 100);
    if(it == v.end())
    {
        cout << "not find" << endl;
    }
    else
    {
        cout << "find" << endl;
    }

    // for(int x : v)
    // {
    //     cout << x << " ";
    // }

    return 0;
}