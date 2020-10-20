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
    f(i, n)cin >> a[i];
    int l = 0;
    int r = n-1;
    f(i, n){
        if(a[i]){l=i;break;}
    }
    f(i, n){
        if(a[n-i-1]){r = n-i-1; break;}
    }
    int ans = 0;
    for(int i=l;i<=r;++i){
        if(a[i]==0) ans++;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}