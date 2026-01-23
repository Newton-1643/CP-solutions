#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<string> us;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (us.find(v[i]) == us.end())
        {
            cout << v[i] << '\n';
            us.insert(v[i]);
        }        
    }
}