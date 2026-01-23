#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n;
        long long cnt = 0;
        cin >> n;

        for (int j = 1; n % j == 0; j++)
        {
           cnt++;
        }
            
        cout << cnt << endl;
    }
}