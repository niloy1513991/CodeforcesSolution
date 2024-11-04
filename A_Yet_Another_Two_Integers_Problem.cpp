#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    int ans = 0;
    while (times--)
    {
        int a, b, subs = 0;
        cin >> a >> b;
        if (a == b)
        {
            ans = 0;
        }
        else
        {
            subs = abs(a - b);
            if (subs % 10 == 0)
            {
                ans = subs / 10;
            }
            else
            {
                ans = (subs / 10) + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}