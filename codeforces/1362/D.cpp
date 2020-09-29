#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll  long long
#define ld long double
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
const ll maxn=5e5+10;
const ll mod=1e9+7;
vector<vector<int>> g(maxn);

int main() {
  	fast;
  	int n,m,i,j,k,a,b;
  	cin>>n>>m;
  	for(i=0;i<m;i++){
  		cin>>a>>b;
  		--a;
  		--b;
		g[a].pb(b);
		g[b].pb(a);	
	}
	vector<pi> ord(n);
	vector<int> topik(n);
	for(i=0;i<n;i++){
		cin>>ord[i].first;
		topik[i]=ord[i].first;
		ord[i].second=i;
	}
	sort(all(ord));  
	vector<int> res; 
	vector<bool> used(n,false); 
	
	for(auto x : ord){
		int blog = x.ss; 
		int topic = x.ff;
		
		set<int> neighbourtopics;
		
		for(auto neighbourblogs : g[blog]){
			if(used[neighbourblogs]){        
				neighbourtopics.insert(topik[neighbourblogs]);
			}
		}
		int mex=neighbourtopics.size()+1;
		for(i=1;i<=neighbourtopics.size();++i){
			if(neighbourtopics.find(i)==neighbourtopics.end()){
				mex=i;
				break;
			}
		}
		if(topic!=mex){ 
			cout << -1;
			return 0;
		}
		used[blog]=true;
		res.pb(blog);
	}
	for(auto x : res)
		cout<<x+1<<" ";
}