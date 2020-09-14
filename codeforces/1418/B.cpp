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
    int t;
    cin >> t;
    while(t--){
        int n;
        vi sa;
        cin >> n;
        int arr[n], l[n];
        f(i, n) cin >> arr[i];
        f(i, n){
            cin >> l[i];
            if(!l[i]){
                sa.pb(arr[i]);
            }
        }
        sort(sa.begin(), sa.end(), greater<int>());

        f(i, n){
            if(l[i]) cout << arr[i] << " ";
            else{
                cout << *sa.begin() << " ";
                sa.erase(sa.begin());
            }
        }
        cout << "\n";
    }   
}