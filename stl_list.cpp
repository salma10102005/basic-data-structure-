#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l = {1,2,3,4,5}; // 10 ta element and shob 3
    list<int>l2(l); // l er shb element copyhoye gese l2 te
    // for(auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    // or
    // for(int val : l)
    // {
    //     cout << val << " ";
    // }
    for(int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}
// list < int > my_list1 = {1,2,3,4} ; // একটি list ডিক্লেয়ার করে সেখানে এই ভ্যালু গুলা দিয়ে ইনিশিয়ালাইজ করলাম

// list < int > my_list(v1) ; // আরেকটি list my_list এ my_list1 এর সকল ভ্যালু সমূহ কপি হয়ে যাবে।​ ​

// // একই ভাবে আমরা array কপি করতে পারবো।

// int array[5] = {1,2,3,4,5} ;

// list<int> copy_list(array,array+5) ; // array er সব ভ্যালু list কপি হয়ে যাবে

// // একই ভাবে আমরা ভেক্টর কপি করতে পারবো।

// vector<int> v[5] = {1,2,3,4,5} ;

// list<int> copy_list(v.begin(),v.end()) ; // vector er সব ভ্যালু এই list এ কপি হয়ে যাবে