#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
     
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }


    int j;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    for (int i = 0; i < N; i++)
    {
        j = a[i];
        
        if (j % 2 == 0)
        {
            k = k + 1;
        }
        else
        {
            l = l + 1;
        }

        if (j > 0)
        {
            m = m + 1;
        }
        else if (j < 0)
        {
            n = n + 1;
        }
        else
        {
            m = m + 0;
        }

        }
        cout << "Even: " << k << endl;
        cout << "Odd: " << l << endl;
        cout << "Positive: " << m << endl;
        cout << "Negative: " << n << endl;
}