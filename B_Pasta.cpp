#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int m, n;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool flag = true;
    
    for (int j = 0; j < m; j++)
    {
        ll req = b[j];
        bool found = binary_search(a.begin(), a.end(), b[j]);

        if(found)
        {
            a.erase(lower_bound(a.begin(), a.end(), b[j]));
        }
        else
        {
            flag = false;
            break;
        }
    }


    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

}