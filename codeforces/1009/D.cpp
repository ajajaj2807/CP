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

const int MOD = 1e9+7;
const int mxN = 1e5;

int main() {
    int n, m;
    cin >> n >> m;
    if(m<n-1){
        cout << "Impossible";
        return 0;
    }
    int ans=0;
    pii ap[mxN];

    f(i, n) for(int j=i+1;j<n;++j){
        if(ans>=m) break;
        if(__gcd(i+1, j+1)==1)
            ap[ans++] = mp(i+1, j+1);
    }
    if(ans<m){
        cout << "Impossible";
        return 0;
    }
    cout << "Possible\n";
    f(i, m){
        cout << ap[i].ff << " " << ap[i].ss << "\n";
    }

}