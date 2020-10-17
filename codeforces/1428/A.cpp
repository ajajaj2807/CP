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
    ll x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll dis = 0;
    if(y1==y2)
    dis = abs(x1-x2);
    else if(x1==x2) dis = abs(y1-y2);
    else dis = abs(x1-x2) + abs(y1-y2) + 2;
    cout << dis << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}