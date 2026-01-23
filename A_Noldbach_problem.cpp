#include <bits/stdc++.h>
using namespace std;

bool isprime(int i)
{
    if (i < 2) return false;
    for (int j = 2; j * j <= i; j++)
    {
        if (i % j == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> check;
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
            check.push_back(i);
    }

    int cnt = 0;
    for (int i = 0; i < (check.size()-1); i++)
    {
        int val = check[i] + check[i+1] + 1;
        if (val <= n && isprime(val))
        cnt++;
    }
    

    if (cnt >= k)
        cout << "YES";
    else
        cout << "NO";
}
