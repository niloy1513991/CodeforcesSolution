#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int e, first = 0, sereja = 0, dima = 0;
    cin >> e;
    vector<int> arr(e);
    for (int i = 0; i < e; i++)
    {
        cin >> arr[e];
    }
    for (int i = first; i < e; i++)
    {
        if (i % 2 != 1)
        {
            if (arr[0] > arr[arr.size() - 1])
            {
                sereja += arr[0];
                arr.erase(arr.begin());
                first += 1;
            }
            if (arr[e - 1] > arr[0])
            {
                sereja += arr[arr.size() - 1];
                arr.pop_back();
                e -= 1;
            }
        }

        else if (i % 2 == 1)
        {
            if (arr[0] > arr[arr.size() - 1])
            {
                dima += arr[0];
                arr.erase(arr.begin());
                first += ;
            }
            if (arr[e - 1] > arr[0])
            {
                dima += arr[arr.size() - 1];
                arr.pop_back();
                e -= 1;
            }
        }
    }
    cout << sereja << " " << dima << endl;

    return 0;
}