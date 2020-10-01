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


int main() {
    int n;
    cin>>n;
    vector<long int> bri[2000];
    for(long int i=0;i<n;i++)
    {
        long int k;
        cin>>k;
        for(long int j=0;j<k;j++)
        {
            long int aa;
            cin>>aa;
            bri[i+1].push_back(aa);
        }
        sort(bri[i+1].begin(), bri[i+1].end());
    }
    bri[0] = bri[n];
    bri[n+1] = bri[1];
    int ans=0;
    for(int i=1;i<=n;++i){
        f(j, bri[i].size()-1){
        int l = (i-1);
        int r = (i+1);
        auto lnf = lower_bound(bri[l].begin(), bri[l].end(), bri[i][j]);
        auto rnf = lower_bound(bri[r].begin(), bri[r].end(), bri[i][j]);   
        auto lns = lower_bound(bri[l].begin(), bri[l].end(), bri[i][j+1]);
        auto rns = lower_bound(bri[r].begin(), bri[r].end(), bri[i][j+1]);
        // dbg(i);
        // dbg(j);
        // dbg(lns-lnf);   
        if(lns-lnf != rns-rnf) ans++;
    }
    }
    cout << ans;
}