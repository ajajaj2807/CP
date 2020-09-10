#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    vector<int> mins;
    for(int i=0;i<n-1;++i){
        mins.push_back(arr[i]-arr[i+1]);
    }
    sort(mins.begin(), mins.end());
    ll ans=arr[n-1]-arr[0];
    for(int i=0;i<k-1;++i){
        ans += mins[i];
    }
    cout << ans;
}