#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
    string s;
    ll ans=0;
    cin >> s;
    char prev = 'a';
    for(char c:s){
        int cval = min( abs(c-prev), 26-abs(-c+prev) );
        prev = c;
        ans += cval;
    }
    cout << ans;
}