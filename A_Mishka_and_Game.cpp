#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    int mishka = 0, chris = 0;
    cin >> times;
    while (times--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            mishka++;
        }
        else if (a < b)
        {
            chris++;
        }
    }
    // if (mishka > chris)
    // {
    //     cout << "Mishka" << endl;
    // }
    // else if (mishka < chris)
    // {
    //     cout << "Chris" << endl;
    // }
    // else if (mishka == chris)
    // {
    //     cout << "Friendship is magic!^^" << endl;
    // }
    cout << (mishka > chris ? "Mishka" : (mishka < chris ? "Chris" : "Friendship is magic!^^")) << endl;
    return 0;
}