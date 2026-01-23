#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
	int t;
	cin>>t;
	
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << 2 << " " << n-3 << " " << 1 << endl;
        }
        else
        {
            ll ans = (n-1)/2;

            if (ans % 2 == 0)
            {
                cout << ans-1 << " " << ans+1 << " " << 1 << endl;
            }
            else
            {
                cout << ans-2 << " " << ans+2 << " " << 1 << endl; 
            }
        }
    }
}