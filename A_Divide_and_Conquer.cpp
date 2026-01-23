#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int cntodd = 0;
        int final = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            int ans = 0; 
            if (a[i] % 2 != 0)
            {
                cntodd++;
                
                while(a[i] % 2 != 0)
                {
                    a[i] /= 2;
                    ans++;
                }
            }
            else
            {
                while (a[i] % 2 == 0)
                {
                    a[i] /= 2;
                    ans++;
                }
            }

            final = min(final, ans);
        }
        if (cntodd % 2 != 0)
            {
                cout << final << '\n';
            }
            else 
            {
                cout << 0 << '\n';
            }

    } 
}
