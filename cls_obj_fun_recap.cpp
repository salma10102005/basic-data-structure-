// #include<bits/stdc++.h>
// using namespace std;
// void fun(int* p)
// {
//     int y = 100;
//     p = &y;
//     cout << "in fun " << *p << endl;
// }
// int main()
// {
//     int x = 10;
//     int* p = &x;
//     fun(p);
//     cout << "in main " << *p << endl;
//     return 0;
// }
//eikhne change ta main funtion   HOCCHE NA just funtion er vetor hocche;
//jodi change ta chai tahole reference akare pathate hobe ;
#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    int y = 100;
    p = &y;
    cout << "in fun " << &p << endl;
}
int main()
{
    int x = 10;
    int* p = &x;
    fun(p);
    cout << "in main " << &p << endl;
    return 0;
}