#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    string sample = "codeforces";
    cin >> times;
    while (times--)
    {
        char ch;
        cin >> ch;
        if (sample.find(ch) != string::npos)
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