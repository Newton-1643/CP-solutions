#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,h,l;
        cin >>n >>h>>l;
        vector<int>arr(n);
        for(auto &i : arr) cin >> i;
        int ans=0;
        sort(arr.begin(),arr.end());
        vector<pair<int,int>>seen;
        for(int i =0;i<n;i++){
            seen.push_back({arr[i],arr[i+1]});
            if((arr[i]<=l&&arr[i+1]<=h)||arr[i]<=h||arr[i+1]<=l){
                
            }
        }
    }

}