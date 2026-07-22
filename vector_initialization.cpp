#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int>v; //type1 
    //vector<int>v(5); // type 2
    vector<int>v(5,50); //type 3
    vector<int>v2(v); //type 4
    for(int i = 0 ; i<v2.size() ; i++)
    {
        cout << v2[i] << " " ;
    }
    cout << v.size() << endl;
    return 0;
}