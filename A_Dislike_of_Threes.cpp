#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int k;
        cin >> k;
        int count = 0;
        int num = 0;

        for (int i = 1; count < k; i++)
        {
            if (i % 10 != 3 && i % 3 != 0)
            {
                count++;
                num = i;
            }
        }
        cout << num << endl;
    }
    return 0;
}
