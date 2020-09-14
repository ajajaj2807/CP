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

int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;
    int ans[26][n+1];

    f(c, 26){
        mset(ans[c], 0);
        f(i, n){
            int cnt=0;
            for(int j=i; j<n;++j){
                if(s[j]-'a'!=c) cnt++;
                ans[c][cnt] = max(ans[c][cnt], j-i+1);
            }
        }
        for(int i=1;i<=n; ++i){
            ans[c][i] = max(ans[c][i], ans[c][i-1]);
        }
    }

    while(q--){
        int l;
        char c;
        cin >> l >> c;
        cout << ans[c-'a'][l] << "\n";
    }

}

// dp[i][j] = ans for color 'i' with 'j' changes.
