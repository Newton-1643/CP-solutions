#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n; // no. of buildings apart from the headqurters

        int a[n]; // no. of visits        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; // no. of visits                  
        }

        sort (a, a+n, greater<int>());
        
        int sum = 0; // sum is the total walking time
        int distance = 1;

        for (int i = 0; i < n; i += 2)
        {
            if (i != n-1)
            {
                sum += (2*(a[i]) + 2*(a[i+1])) * (distance);
            }
            else
            {
                sum += (2*a[i]) * (distance);
            }
            distance++;
        }

        cout << sum << endl;

        int coordinates[n+1];
        coordinates[0] = 0;

        for (int j = 1; j < n+1; j++)
        {
            coordinates[1];
        }

    }
}