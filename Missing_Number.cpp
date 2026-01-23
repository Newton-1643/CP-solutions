#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> v(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin >> v[i];
    }

    sort (v.begin(), v.end());

    for (int i = 1; i <= n; i++)
    {
        if (binary_search(v.begin(), v.end(), i) != true)
        {
            cout << i;
            break;
        }
    }
}