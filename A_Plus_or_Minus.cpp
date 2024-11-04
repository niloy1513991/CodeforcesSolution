#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+" << endl;
        }
        else if (a - b == c)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}