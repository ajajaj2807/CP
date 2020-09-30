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
    int n;
    cin >> n;
    int b[4][n+1];
    int o=0,t=0;
    f(i, n){
        int aa, bb;
        cin >> aa >> bb;
        if(aa==1) b[1][++o]=bb;
        else b[2][++t]=bb;
    }
    int ans=mxN;
    b[1][0] = 0;
    b[2][0] = 0;
    sort(b[1]+1, b[1]+o+1, greater<int>());
    sort(b[2]+1, b[2]+t+1, greater<int>());
    f(i, n+1){
       if(i==0)
           continue;
        if(i<=o)
        b[1][i] += b[1][i-1];
        if(i<=t)
        b[2][i] += b[2][i-1];
    }
    f(i, o+1){
        f(j, t+1){
            int cs = b[1][o]-b[1][i] + b[2][t] - b[2][j];
            if(i+(2*j) >= cs){
                ans = min(ans, i+2*j);
            }

        }
    }
    cout << ans;
}
