#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        vector<int> vec(3);
        cin >> vec[0] >> vec[1] >> vec[2];
        sort(vec.begin(), vec.end());
        cout << vec[1] << endl; // The middle element after sorting
    }
    return 0;
}