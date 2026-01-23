#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        // we can either increase or decrease both by 1 in one operation, only possible if both a and b are greater than 0 
        // we have to print max excitement an minimum moves required
        // and if infinite excitement possible, print 0 0 
        // excitement = gcd(a, b);

        if (abs(a-b) == 0)
        {
            cout << "0 0\n";
        }        
        else
        {
            cout << abs(a-b) << " " << min((abs(a-b)) - a%(abs(a-b)), a % (abs(a-b))) << '\n';
        }
    }
}