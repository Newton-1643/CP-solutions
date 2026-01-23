#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int M, m;

    if (A >= B && A >= C)
    M = A;

    else if (B >= A && B >= C)
    M = B;

    else
    M = C;

    if (A <= B && A <= C)
    m = A;

    else if (B <= A && B <= C)
    m = B;

    else 
    m = C;

    cout << m << " " << M;

    return 0;
}