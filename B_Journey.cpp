#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll sum = a + b + c;

        if (n % sum <= a && n % sum > 0)
        {
            cout << ((n/sum)*3) + 1 << '\n';
        }
        else if (n % sum > a && n % sum <= (a+b))
        {
            cout << ((n/sum)*3) + 2 << '\n';
        }
        else if (n % sum > (a+b) && n % sum <= (a+b+c)) 
        {
            cout << ((n/sum)*3) + 3 << '\n';
        }
        else if (n % sum == 0)
        {
            cout << (n/sum)*3 << '\n';
        }
    }
}