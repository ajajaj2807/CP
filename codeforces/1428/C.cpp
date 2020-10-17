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
    string s;
    cin >> s;
    stack<char> st;
    f(i, s.size()){
        if(st.empty()) {st.push(s[i]);continue;}
        // if(i==0) st.push(s[i]);
        if(s[i]=='A') st.push(s[i]);
        if(s[i]=='B'){
            st.pop();
        }
        // dbg(i);
        // dbg(st.size());
    }
    cout << st.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) solve();
}