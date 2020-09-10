// For page 'p', solve 'p/4 + 4' problems. 

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    int n, m;
    cin >> n >> m;
    int p[n];
    for( int i=1;i<n;++i){
        cin >> p[i];
    }
    int i=1;
    while(1&&i<=n){
        if(i==m){
            cout << "YES";
            exit(0);
        }
        if(i==n){
            cout << "NO";
            exit(0);
        }
        i+=p[i];
    }
    cout << "NO";
}