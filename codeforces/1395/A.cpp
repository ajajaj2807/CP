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
    int r, g, b, w;
    cin >> r >> g >> b >> w;
    
    if(r%2+b%2+g%2+w%2 <=1 ) {
        cout << "Yes\n";
        return;
    }
    r--;g--;b--;w+=1;
    if(r%2+b%2+g%2+w%2 <=1 && r>=0 && g>=0 && b>=0 ) {
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}

// eee 
// ooo o
// eoo e* o
// eeo o*