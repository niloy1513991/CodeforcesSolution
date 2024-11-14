#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int n;
        cin >> n;
        int sum = (n / 10) + (n % 10);
        cout << sum << endl;
    }
    return 0;
}