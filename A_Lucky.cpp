#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                int nmbr1 = int(s[i]);
                ans1 += nmbr1;
            }
            else if (i > 2)
            {
                int nmbr2 = int(s[i]);
                ans2 += nmbr2;
            }
        }
        if (ans1 == ans2)
        {
            cout << "YES" << endl;
        }
        else if (ans1 != ans2)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}