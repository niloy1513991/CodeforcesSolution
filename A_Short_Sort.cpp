#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        string str;
        cin >> str;
        if (str == "abc" || str == "acb" || str == "bac" || str == "cba")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}