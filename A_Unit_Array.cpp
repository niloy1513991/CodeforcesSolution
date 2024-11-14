#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        int n, ans;
        cin >> n;
        int array1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array1[i];
        }
        int positive = 0;
        for (int i = 0; i < n; i++)
        {
            if(i > 0){
                positive++;
            }
        }
        if(positive == 0){

        }
        cout << ans;
    }
    return 0;
}