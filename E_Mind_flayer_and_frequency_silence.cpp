#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(2 * n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i + n] = a[i];
        }

        unordered_map<ll, deque<int>> mp;
        ll pref = 0;
        int ans = 0;

        mp[0].push_back(0);

        for (int i = 1; i <= 2 * n; i++)
        {
            pref ^= a[i];

            if (!mp[pref].empty())
            {
                while (!mp[pref].empty() && i - mp[pref].front() > n)
                    mp[pref].pop_front();

                if (!mp[pref].empty())
                    ans = max(ans, i - mp[pref].front());
            }

            mp[pref].push_back(i);
        }

        cout << ans << '\n';
    }
    return 0;
}
