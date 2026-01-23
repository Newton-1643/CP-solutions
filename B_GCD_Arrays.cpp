#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    int t; 
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        if (l == r)
        {
            if (l == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            ll total = r - l + 1;
            if (total % 2 == 0)
            {
                ll req = total / 2;
                if (req <= k)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                if (l % 2 != 0)
                {
                    ll req = (total / 2) + 1;
                    if (req <= k)
                    {
                        cout << "YES" << endl;
                    } 
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
                else 
                {
                    ll req = total / 2;
                    if (req <= k)
                    {
                        cout << "YES" << endl;
                    } 
                    else
                    {
                        cout << "NO" << endl;
                    }
                }

            }
        }
    }
}