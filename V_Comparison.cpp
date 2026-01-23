#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B;
    string S;
    cin >> A >> S >> B;

    if ((A == B && S == "=" ) || (A > B && S == ">") || (A < B && S == "<"))
    cout << "Right";

    else 
    cout << "Wrong";

    return 0;
}