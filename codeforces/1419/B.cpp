#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<int, int>
#define vi vector<int>
#define si set<int>
#define mset(arr, val) memset(arr, val, sizeof(arr))
#define f(i, n) for(int (i)=0;(i)<(n);(i)++)

const int MOD = 1e9+7;
const int mxN = 1e5;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        ll ans=0;
        int i=1;
        for(;i<35;++i){
            ll n = (1<<i)-1;
            // cout << n << " n\n";
            ll curr = n*(n+1)/2;
            ans += curr;
            // cout << ans << " curr\n"; 
            if(ans>x) break;
        }
        cout << i-1 << "\n";
    }
}