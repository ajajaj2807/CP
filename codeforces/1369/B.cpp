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
    string s;
    cin >>n >>s;
    int sw = 1;
    f(i, n-1) if(s[i+1]<s[i])sw = 0;
    if(sw){
        cout << s << "\n";
        return;
    }
    string ans;
    f(i, n){
        if(s[i] == '1')break;
        ans.pb('0');
    }
    ans.pb('0');
    reverse(s.begin(), s.end());
    f(i, n){
        if(s[i] == '0')break;
        ans.pb('1');
    }
    cout << ans << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}