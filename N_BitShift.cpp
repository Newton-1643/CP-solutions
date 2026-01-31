// Includes almost all standard library headers
#include <bits/stdc++.h>

// Use the standard namespace to avoid typing std::
using namespace std;
#define ll long long
int main()
{   int t;
    cin >> t;
    while (t--){
    int n,m;
    cin >> n >> m;
    string a;
    cin >> a;
    vector<ll> arr(m);
    for(auto &i : arr) cin >> i;
    ll ans = stoi(a, nullptr, 2);
    for(auto i : arr){
        if(i>=0){
            ans = ans<<i;
        }else{
            ans = ans>>(-1*i);
        }
    }
    vector<ll> store;
    ll k = ans;
    while(k!=0){
        k=k/2;
        ll rem = k%2;
        store.push_back(rem);
    }
    reverse(store.begin(), store.end());
    for(int i = 0; i < store.size(); i++){
        cout << i;
        if (i == (store.size())-1) cout << endl;
    }
    

}}