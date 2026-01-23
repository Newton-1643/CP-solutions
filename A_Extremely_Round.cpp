#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int cnt = 0;

        while (n >= 10)
        {
            n /= 10;
            cnt += 9;
        }

        cnt += n % 10;

        cout << cnt << endl;
    }
}