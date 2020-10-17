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
    int n;
    cin >> n;
    char d[n];
    bool gc = 0,gcc = 0;
    f(i, n) {cin >> d[i];
    if(d[i]=='>') gc = 1;
    if(d[i]=='<') gcc = 1;
    }
    bool dis = 0;
    f(i, n-1){
        if((d[i]=='<'&&d[i+1]=='>')||(d[i]=='>'&&d[i+1]=='<')) dis = 1;
    }
    if((d[n-1]=='<'&&d[0]=='>')||(d[n-1]=='>'&&d[0]=='<')) dis = 1;
    int ans = 0;
    if(!gc || !gcc){
        cout << n << "\n";
        return;
    }
    f(i, n-1){
        if(d[i]=='-'||d[i+1]=='-')ans++;

    }
    if(d[n-1]=='-'||d[0]=='-') ans++;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}