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

ll _pow(ll a, ll b){
    ll res=1;
    while(b){
        if(b&1) res=(res*a)%MOD;
        a*=a;
        a%=MOD;
        b>>=1;
    }
    return res;
}

ll inv(const ll &a){
    return _pow(a, MOD-2)%MOD;
}
int main() {
    ll A, B, n, x;
    cin >> A >> B >> n >> x;
    x %= MOD;
    A %= MOD;
    B %= MOD;
    ll sum = (_pow(A, n) * x) % MOD;
    ll sum2;
    if (A == 1)
        sum2 = ((n % MOD) * B) % MOD;
    else
        sum2 = B * (((_pow(A, n) - 1) % MOD * inv(A - 1)) % MOD);
    cout << (sum + sum2 % MOD) % MOD;
}
