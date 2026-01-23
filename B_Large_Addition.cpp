#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int  x;
    cin >> t;

    for (int i=0; i<t; i++)
    {
        cin >> x;
        int flag = 0;

        while (x>9)
        {
            int digit = x%10;
            if (flag == 0)
            {
                flag = 1;
                if (digit == 9)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else if (digit == 0)
            {
                cout << "NO" << endl;
                break;
            }
            x /= 10;
        }
        if (x == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }    
}
