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
    long long int n,m,a,b,ans=3;
    cin>>n>>m>>a>>b;
    a--;
    b--;
    long long int r1,c1,r2,c2;
    r1=a/m;
    r2=b/m;
    c1=a%m;
    c2=b%m;
    if(r2-r1==1 || c1==0 || c2==m-1 || b==n-1 || c1-c2==1)
        ans=2;
    if(r2-r1==0 || c1==0 && (c2==m-1 || b==n-1))
        ans=1;
    cout<<ans<<endl;
	return 0;
}