#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, H, M, h, m, sleep_time, alarm_time, diff, ans;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin >> n >> H >> M;
        sleep_time = (60 * H + M);
        ans = 1e8;
        
        for (int j = 1; j <= n; j++)
        {           
            cin >> h >> m; 
            alarm_time = 60 * h + m;     
                 
            if (alarm_time < sleep_time)
            {
                alarm_time += 1440;
            }
             
            diff = alarm_time - sleep_time;
            ans = min(ans, diff);
        }
        cout << ans / 60 << " " << ans % 60 << '\n';        
    }
}