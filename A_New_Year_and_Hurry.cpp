#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int time_req = 240 - k;
    int time_taken = 0;
    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        time_taken += 5 * i;        
        
        if (time_taken > time_req)
        {
            break;
        }        
        cnt++;
    }

    cout << cnt;
}
