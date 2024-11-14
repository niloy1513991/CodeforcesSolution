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
        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            vector<int> arr;
            int sum1 = 0, sum2 = 0;

            for (int i = 1; i <= n / 2; i++)
            {
                arr.push_back(2 * i);
                sum1 += 2 * i;
            }

            for (int i = 1; i < n / 2; i++)
            {
                arr.push_back(2 * i - 1);
                sum2 += 2 * i - 1;
            }

            // Add the last element to balance the sums
            arr.push_back(sum1 - sum2);

            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
