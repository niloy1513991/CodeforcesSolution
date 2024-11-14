#include <bits/stdc++.h>
#include <unordered_set> // Include the unordered_set header
using namespace std;

bool isComposite(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return true;
    }
    return false;
}

vector<int> getCompositeNumbers(int n)
{
    vector<int> composites;
    for (int i = 4; i < n; i++)
    {
        if (isComposite(i))
        {
            composites.push_back(i);
        }
    }
    return composites;
}

int main()
{
    int n;
    cin >> n;
    vector<int> composites = getCompositeNumbers(n);
    unordered_set<int> compositeSet(composites.begin(), composites.end()); // Correctly declare the unordered_set
    int first = -1, second = -1;

    for (int i = 0; i < composites.size(); i++)
    {
        int complement = n - composites[i];
        if (compositeSet.find(complement) != compositeSet.end())
        {
            first = composites[i];
            second = complement;
            break;
        }
    }

    if (first != -1 && second != -1)
    {
        cout << first << " " << second << endl;
    }
    else
    {
        cout << "No such pair found" << endl;
    }

    return 0;
}
