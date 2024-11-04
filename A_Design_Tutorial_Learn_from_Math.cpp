#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> myVector;
    for (int i = 4; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (i % j == 0)
            {
                myVector.push_back(i);
            }
            break;
        }
    }
    for (int i = 0; i < myVector.size(); i++)
    {
        for (int j = 0; j < myVector.size(); i++)
        {
            if (myVector[i] + myVector[j] == n)
            {
                cout << myVector[i] << " " << myVector[j] << endl;
            }
            break;
        }
    }

    // for (int i = 0; i < myVector.size(); i++)
    // {
    //     cout << myVector[i] << endl;
    // }

    return 0;
}