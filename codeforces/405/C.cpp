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

void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int n;
    fastscan(n);
    int m[n][n];
    f(i, n) f(j, n) fastscan(m[i][j]);
    int q;
    fastscan(q);
    int ans=0;
    f(i, n) ans = (ans+m[i][i])%2;
    while(q--){
        int x, y;
        fastscan(x);
        if(x==3) {cout << ans;continue;}
        fastscan(y);
        ans = 1-ans;
    }
}