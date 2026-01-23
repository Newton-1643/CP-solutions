#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        int ans = 0;
        vector<int> factors;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0 && i * i != x)
            {
                ans += 2;
            }
            else if (x % i == 0 && i * i == x)
            {
                ans++;
            }
        }

        cout << ans << '\n';
    }
}