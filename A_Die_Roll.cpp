
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    vector<int> arr(2);
    cin >> arr[0] >> arr[1];
    sort(arr.begin(), arr.end(), greater<int>());

    int subs = 6 - arr[0];
    int topNumber = subs + 1;
    int bottomNumber = 6;

    // Simplify the fraction
    int divisor = gcd(topNumber, bottomNumber);
    topNumber = topNumber / divisor;
    bottomNumber = bottomNumber / divisor;
    cout << topNumber << "/" << bottomNumber << endl;
    return 0;
}