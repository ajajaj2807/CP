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

ll fact(int n){
    ll res = 1;
    f(i, n) res = (res*(i+1))%MOD;
    return res;
}
// MOD needed
ll _pow(ll a, ll b){
    ll res=1;
    while(b){
        if(b&1) res=(res*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return res;
}
ll inv(ll n){
    ll res = _pow(n, MOD-2);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x, pos;
    cin >> n >> x >> pos;
    int cnt = 0, gr=0, sm=0;
    int l = 0;
    int r = n;
    while(l<r){
        int md = (l+r)/2;
        // if(pos==md) break;
        if(pos>=md){
            l = md+1;
            // if(l>pos)
            if(md^pos)
            sm++;
        }else {r = md;gr++;}
        // cnt++;
    }
    int nl = n-x;
    int ns = x-1;
    int rem = n-sm-gr-1;
    // dbg(ns);dbg(rem);dbg(nl);
    // dbg(gr);
    if(gr>nl||sm>ns){
        cout << 0;
        return 0;
    }
    ll ans = fact(rem);
    ans = (ans*fact(ns))%MOD;
    ans = (ans*fact(nl))%MOD;
    ans = (ans*inv(fact(ns-sm)))%MOD;
    ans = (ans*inv(fact(nl-gr)))%MOD;
    // dbg(inv(fact(nl-gr)));
    cout << ans;
}