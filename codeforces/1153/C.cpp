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
    cin >> n;
    char seq[n];
    int lb=0, rb=0;
    f(i, n){
        cin >> seq[i];
        if(seq[i]=='(')lb++;
        if(seq[i]==')')rb++;
    }
    if(n%2){
        cout << ":(";
        return 0;
    }
    if(rb>n/2||lb>n/2){
        cout << ":(";
        return 0;
    }
    lb=n/2-lb;
    f(i, n){
        if(seq[i]=='?'){
            if(lb){seq[i] = '(';lb--;}
            else seq[i] = ')';
        }
    }
    int df=0;
    f(i, n){
        if(seq[i]=='(')df++;
        else(df--);
        if(i<n-1&&df<=0){
            cout << ":(";
            return 0;
        }
    }
    f(i, n) cout << seq[i];
}