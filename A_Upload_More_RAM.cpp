#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> n >> k;

        cout << ((n-1)*k)+1 << '\n';
    }
}