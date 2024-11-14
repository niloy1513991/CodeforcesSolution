// NOT COMPETED
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> array1;
        for (int i = 1; i <= k; i++)
        {
            if (i != x)
            {
                array1.push_back(i);
            }
        }
        sort(array1.begin(), array1.end(), greater<int>());
        int count = 0;
    }
    return 0;
}