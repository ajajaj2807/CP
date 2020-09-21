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

void dbg(string s, int x){
    cout << "\n-debugger- " << s << " - " << x << "\n";
    return;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    f(i, n) cin >> arr[i];
    map<int, int> dp;
    int ans = 0;
    int mxe = 0;
    f(i, n) {
        dp[arr[i]] = max(dp[arr[i]], dp[arr[i]-1]+1);
        if(dp[arr[i]]>ans) {
            ans = dp[arr[i]];
            mxe = arr[i];
        }
    }
    cout << ans << "\n";
    int prev = 0;
    for(int i=ans-1;i>=0;--i){
        auto it =find(arr+prev, arr+n, mxe-i);
        // dbg("mxe-i", mxe-i);
        prev = distance(arr, it);
        cout << distance(arr, it)+1 << " ";
    }

}