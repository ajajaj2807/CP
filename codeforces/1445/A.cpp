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
    int n, x;
    cin >> n >> x;
    int a[n], b[n];
    f(i, n) cin >> a[i];
    f(i, n) cin >> b[i];
    sort(a, a+n);
    sort(b, b+n, greater<int>());
    f(i, n){
        if(a[i]+b[i]>x){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}