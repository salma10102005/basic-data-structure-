// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public :
//     int val;
//     node* next;
// };
// int main()
// {
//     node a,b,c;
//     a.val = 10;
//     b.val = 20;
//     c.val = 30;
    
//     a.next = &b;
//     b.next = &c;
//     c.next = NULL;
//     cout << a.val << endl;
//     cout << (*a.next).val << endl; // eita purota hocche b,, tahole c re accesskrte hole b er nxt;
//     cout << (*a.next).next << endl; // . next next kore onk gulo access kora jay
//     return 0;
// }
// // constructor use kore korbo ekhn
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
int main()
{
    node a(10),b(20),c(30);
    
    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    cout << (*a.next).val << endl; // eita purota hocche b,, tahole c re accesskrte hole b er nxt;
    cout << (*a.next).next << endl; // . next next kore onk gulo access kora jay
    return 0;
}
