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
    int n,m;
    cin >> n >> m;
    int tf=0;
    f(i, n){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b==c)tf=1;
    }
    if(m%2) {cout << "NO\n";return;}
    if(tf) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}