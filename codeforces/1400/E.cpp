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
int n;
vi a;


int solve(int l, int r, int h){
    if(l>r) return 0;
    int mn_idx = min_element(a.begin()+l, a.begin()+r+1) - a.begin();
    int mn = a[mn_idx];
    return min(r-l+1, solve(l, mn_idx-1, mn) + solve(mn_idx+1, r, mn) + mn - h );
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    a.assign(n, 0);
    f(i, n) cin >> a[i];
    cout << solve(0, n-1, 0);
}