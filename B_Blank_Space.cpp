#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int len, count = 0;
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < len; i++)
        {
            if (arr[i] == 0 && arr[i + 1] == 0)
            {
                count++;
                if (arr[i] == 0 && arr[i + 1] != 0)
                    break;
            }
        }
        cout << count << endl;
    }
    return 0;
}