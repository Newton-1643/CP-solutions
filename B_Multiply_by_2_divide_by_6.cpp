#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; // t=no. of testcases
    long long n; // n=given integer

    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int p = 0; // p=no. of moves
        
        while (n != 1)
        {
            if (n % 6 == 0)
            {
                n = n/6, p++;
            }
            else if (n % 3 == 0 && n % 2 != 0)
            {
                n = (n*2)/6, p += 2;
            }
            else 
            {
                break;
            }            
        }
           if (n == 1)
           {
            cout << p << endl;
           }
           else
           {
            cout << "-1" << endl;
           }
}}