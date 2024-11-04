#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int length;
        cin >> length;
        int array[length];
        for (int i = 0; i < length; i++)
        {
            cin >> array[i];
        }

        sort(array, array + length);

        bool canReduce = true;
        for (int i = 1; i < length; i++)
        {
            if (array[i] - array[i - 1] > 1)
            {
                canReduce = false;
                break;
            }
        }

        if (canReduce)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}