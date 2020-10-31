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
const int n = 1e6+5;
ll ps[1500005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    f(i, 1500005) ps[i] = 0;
    for(int i=a;i<=b;++i){
        ps[i+b]++;
        ps[i+c+1]--;
    }
    for(int i=2;i<=1500002;++i) ps[i] = ps[i-1] + ps[i];
    for(int i=2;i<=1500002;++i) ps[i] = ps[i-1] + ps[i];
    ll ans = 0;
    for(int i=c;i<=d;++i){
        ans = ans + ps[1500001] - ps[i];
    }
    cout << ans;
}