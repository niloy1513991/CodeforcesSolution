#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int p = (n - y) / x;
        int k = p * x + y;
        cout << k << endl;
    }
    return 0;
}