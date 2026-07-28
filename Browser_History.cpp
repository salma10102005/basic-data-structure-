#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> browser;
    string s;

    while (cin >> s && s != "end")
    {
        browser.push_back(s);
    }

    int q;
    cin >> q;

    auto current = browser.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string address;
            cin >> address;

            auto it = find(browser.begin(), browser.end(), address);

            if (it == browser.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = it;
                cout << *current << endl;
            }
        }
        else if (cmd == "next")
        {
            auto temp = current;
            temp++;

            if (temp == browser.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current++;
                cout << *current << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (current == browser.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current--;
                cout << *current << endl;
            }
        }
    }

    return 0;
}