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

int main() {
    ll n, m, k;
    ll ans=0;
    cin >> n >> m >> k;
    if(n<m)
    swap(n, m);
    if( k > n+m-2 ){
        cout << -1;
        return 0; 
    }
     if(k>=n)
    {
        ans=max(ans,m/(k-n+2));
    }
    if(k<m)
    {
        ans=max(ans,n*(m/(k+1)));
    }
    if(k<n)
    {
        ans=max(ans,m*(n/(k+1)));
    }
    cout << ans;
}