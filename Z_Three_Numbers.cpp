#include <bits/stdc++.h>

using namespace std;

int main()
{
    int K, S, X, Y, Z;
    cin >> K >> S;
    int ans = 0; 

    for (X = 0; X <= K; X++)
    {
        for (Y = 0; Y <= K; Y++)
        {
            Z = S - X - Y;
            if (Z >= 0 && Z <= K)
            {
                ans++;
            }
        }
    }
    cout << ans;
}
   
