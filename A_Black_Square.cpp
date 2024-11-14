#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(4);
    string str;
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - '1';
        count += a[index];
    }
    cout << count;

    return 0;
}