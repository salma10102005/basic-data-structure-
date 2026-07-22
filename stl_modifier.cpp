// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> my_list = {1,2,3,4} ;

//     list<int> new_list ;

//     new_list = my_list ; // new_list এর মধ্যে my_list er সব ভ্যালু এসাইন হয়ে যাবে।
//     for (int val : new_list)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> my_list = {1,2,3,4} ;

//     my_list.push_back(6) ; // ডান সাইডে ভ্যালু ৬ insert করবে

//     for(int element : my_list )
//     {
//         cout << element << " " ;

//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>my_list = {5,6,7,8,9} ;
//     my_list.pop_back() ; // ডান সাইডে ভ্যালু 9 delete হয়ে যাবে

//     for(int element : my_list)
//     {
//     cout << element << " " ;
//     } // 5 6 7 8
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>my_list = {10,5,6,7,8} ;

//     my_list.pop_front() ; // বাম সাইডে ভ্যালু ১০ delete হয়ে যাবে

//     for( int element : my_list)
//     {
//         cout << element << " " ;
//     } // 5 6 7 8
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> my_list = {5, 6, 7, 8, 9};
//     my_list.insert(next(my_list.begin(), 2), 10); // list টির ২ নাম্বার index ১০ insert হয়ে যাবে।
//     for (auto element : my_list)
//     {
//         cout << element << " ";
//     }
//     // 5 6 10 7 8 9
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> my_list = {1, 2, 3, 4, 7, 6, 4, 5, 4, 3, 4};
//     replace(my_list.begin(), my_list.end(), 4, 100);
//     // এই ফাংশন টি list এর যে যে স্থানে ভ্যালু 4 আছে তা চেঞ্জ করে 100 করে দিবে
//         for (int element : my_list)
//     {
//         cout << element << " ";
//     } // Output :​ ​ 1 2 3 100 7 6 100 5 100 3 100
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {1, 2, 3, 4, 7, 6, 4, 5, 4, 3, 4};
    auto it = find(my_list.begin(), my_list.end(), 6);
     // ৬ ভ্যালুটি list এর মধ্যে পেলে প্রথম যে জায়গায় ভ্যালুটি আছে তার ইটারেটর টা রিটার্ন করা হবে

    if (it != my_list.end())
    { // যদি ভ্যালুটি পাওয়া না যায় তবে it তে my_list.end() স্টোর হবে।
        cout << "found the value " << *it << endl;
    } 
    // যেহেতু ইটারেটর একটি পয়েন্টার এর মতো কাজ করে , 
    // তাই আমরা it কে dereferencing করে তার ভ্যালু দেখতে পারবো
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}