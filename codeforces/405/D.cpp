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
const int s = 1e6;

void solve() {
    int n;
    cin >> n;
    bool used[s+1] = {0};
    bool paired[s+1] = {0};
    int arr[n];
    int ptr=1;
    ll lhs=0;
    f(i, n){
        int x;
        cin >> x;
        lhs+=x;
        arr[i] = x;
        used[x]=1;
    }
    lhs-=n;
    if(n==1){
        cout << 1 << "\n" << (int)1e6-lhs;
        return;
    }
    vi ans;
    f(i,n){
        if(!used[s-arr[i]+1]){
            // dbg(i);
            used[s-arr[i]+1]=1;
            // dbg(arr[i]);
            ans.pb(s-arr[i]+1);
        } else{
            if(paired[arr[i]]) continue;
            while(used[ptr]||used[s-ptr+1]) ptr++;
            paired[arr[i]] = 1;
            paired[s-arr[i]+1] = 1;
            ans.pb(ptr);
            ans.pb(s-ptr+1);
            used[ptr]=1;
            used[s-ptr+1]=1;
        }
    }
    cout << ans.size() << "\n";
    for(auto a : ans) cout << a << " ";

}

int main() {
    solve();
}