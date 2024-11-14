#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--)
    {
        string str;
        cin >> str;
        string ubdu;
        string subS = str.substr(1, str.length() - 2);
        ubdu += str.front();
        for (int i = 0; i < subS.length(); i += 2)
        {
            ubdu += subS[i];
        };
        ubdu += str.back();
        cout << ubdu << endl;
    }

    return 0;
}