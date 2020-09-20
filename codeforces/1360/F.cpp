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

const int MOD = 1e9+7;
const int mxN = 1e5;

void dbg(string s, int x=0){
    cout << "\n-debugger- " << s << " - " << x << "\n";
    return;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    string ans = v[0];
    for (int j = 0; j < m; j++) {
        char save = ans[j];
        for (char d = 'a'; d <= 'z'; d++) {
            ans[j] = d;
            bool flag = true;
            for (int z = 0; z < n; z++) {
                int cntErrors = 0;
                for (int c = 0; c < m; c++) {
                    if (v[z][c] != ans[c]) {
                        cntErrors++;
                    }
                }
                if (cntErrors > 1) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << ans << endl;
                return;
            }
        }
        ans[j] = save;
    }
    cout << "-1" << endl;
}
int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}