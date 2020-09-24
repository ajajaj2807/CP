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
const int mxN = 1e6+1;

int main() {
    int n, cb;
    cin >> n >> cb;
    int c[n];
    f(i, n) cin >> c[i];
    int usable[mxN];
    int cnt[mxN] = {0};
    fill_n(usable, mxN, 1);
    usable[cb] = 0;
    f(i, n){
        if(c[i]==cb){cnt[c[i]]++;continue;}
        if(!usable[c[i]])continue;
        if(cnt[c[i]]<cnt[cb])usable[c[i]]=0;
        else cnt[c[i]]++;
    }
    f(i, mxN){
        if(cnt[i]>=cnt[cb]&&usable[i]&&i){
            cout << i;
            return 0;
        }
    }
    cout << -1;
}