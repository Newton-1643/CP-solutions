#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    long long int fib[N];
    fib[0] = 0;
    if (N != 1)
    {
        fib[1] = 1;
    }
    for (int i = 2; i < N; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[N - 1];
}