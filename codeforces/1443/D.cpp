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
    int a[n];
    f(i, n) {cin >> a[i];}
    int diff[n] = {0};
    int mn = 1e9;
    ll td = 0;
    f(i, n-1){
        if(a[i]>a[i+1]){
            diff[i] = a[i]-a[i+1];
            // a[i] = a[i+1];
        }
        td+=diff[i];
    }
    cout << ((td<=a[0])?"YES":"NO") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}