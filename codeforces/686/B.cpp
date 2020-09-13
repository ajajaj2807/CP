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

int main () {
    int n;
    cin >> n;
    int arr[n];
    f(i,n) cin >> arr[i];
    while(1){
        int l=(int)1e3,r=0;
        int sm = 0;
        for(int i=0;i<n;i++){
            if((i+1)<n&&arr[i+1]<arr[i]){
                l = min(l, i);
                r = max(r, i+1);
                swap(arr[i], arr[i+1]);
                ++i;
                sm = 1;
            }else if(sm) break;
        }
        if(l>r)
            break;
        cout << l+1 << " " << r+1 << '\n';
    }
}

