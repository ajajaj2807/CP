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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> rows(n);
    vector<vector<int>> cols(m);

    f(i, n){
        f(j, m) {
            int x;
            cin >> x;
            rows[i].pb(x);
        }
    }
    f(i, m){
        f(j, n) {
            int x;
            cin >> x;
            cols[i].pb(x);
        }
    }
    vi ans;
    int cid = 0;
    f(i, n){
        f(j, m){
            if(cols[j][0]==rows[i][0]) {cid = j;break;}
        }
    }
    f(i, n){
        int fe = cols[cid][i];
        // dbg(fe);
        f(j, n){
            if(rows[j][0]==fe){
                f(k, m) cout << rows[j][k] << " ";
            }
        }
            cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}