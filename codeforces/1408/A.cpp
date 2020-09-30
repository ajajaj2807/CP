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

void solve() {
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    f(i, n) cin >> a[i];
    f(i, n) cin >> b[i];
    f(i, n) cin >> c[i];
    int last=min({a[0], b[0], c[0]});
    f(i, n-1){
        int ans=0;
        ans= min({a[i], b[i], c[i]});
        if(!(ans^last)) ans = max({a[i], b[i], c[i]});
        last = ans;
        cout << ans << " ";
    }
    int fe = max({a[0], b[0], c[0]});
    if(fe^a[n-1]&&last^a[n-1]) {
        cout << a[n-1] << "\n";
        return;
    }
    else if(fe^b[n-1]&&last^b[n-1]){
        cout << b[n-1] << "\n";
        return;
    }else{
        cout << c[n-1] << "\n";
        return;
    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}