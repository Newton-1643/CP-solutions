#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;

    int i = __gcd(a, b);
    int cnt = 1;
    while(cnt < k)
    {
        i--;
        if (a % i == 0 && b % i == 0)
        {
            cnt++;
        }        
    }
    cout << i;
}