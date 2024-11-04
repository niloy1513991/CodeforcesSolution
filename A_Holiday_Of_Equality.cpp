#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin >> len;
    int arr[len], nmbr = 0, result = 0;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        if (arr[i] > nmbr)
        {
            nmbr = arr[i];
        }
    }
    for (int i = 0; i < len; i++)
    {
        result += (nmbr - arr[i]);
    }

    cout << result;
    return 0;
}