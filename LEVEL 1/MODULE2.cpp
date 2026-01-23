#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    Challenge 1
    int N;
    cin >> N;

    int j = 1;
    
    for (int i=1; i<=N; i++) {
        j = j * i;
        }
    cout << j;
    */

    /*
    Challenge 2
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = INT_MIN;
    
    for (int i = 0; i < n; i++) 
    {
        ans = max(ans, a[i]);
    }
    cout << ans << endl;
    */
   
    /* Challenge 3
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "(" << a[i] << "," << a[j] << ")" << endl;
        }
    }
    */

    /* Pattern printing
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2*n-1); j++)
        {
            if (j > (n-i) && j < (n+i))
            {
                cout<< "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
*/

