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
#define dbg(x) cout<<#x<<" - "<<x<<"\n";
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9+7;
const int mxN = 1e5;

// don't forget overflow
void solve() {
    int n;
    cin >> n;
    // map<ll , vector<int>> mp;
    vector<ll> arr;
    f(i, n){
        ll x;
        // mp[x].pb(i);
        cin >> x;
        arr.pb(x);
    }
    // sort(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    // dbg(arr[0].ff);
    for(int i=n-2;i>0;--i){
        if(arr[i]>arr[i-1]||arr[i]>arr[i+1]){
            if(arr[i]==mx){
                cout << i+1 << "\n"; 
                return;
            }
        }
    }
    if((arr[0]==mx&&arr[0]>arr[1]) ){
        cout << 1 << "\n";
        return;
    }
    if((arr[n-1]==mx&&arr[n-1]>arr[n-2])){
        cout << n << "\n";
        return;
    }

    cout << -1 << "\n";
    return;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}