#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<long int,long int>a, pair<long int,long int>b)
{
    if(a.first==b.first)
    return a.second<b.second;
    else
    return a.first>b.first;
}

int main() {
	long int n;
	cin>>n;
	long int a,b;
	cin>>a>>b;
	pair<long int,long int>p[n+1];
	for(long int i=1;i<=n;i++)
	{
	    cin>>p[i].first;
	    p[i].second=i;
	}
	if(a>b)
	sort(p+1,p+n+1);
	else if(a<b)
	sort(p+1,p+n+1,compare);
	for(long int i=1;i<=a;i++)
	p[p[i].second].first=1;
	for(long int i=a+1;i<=n;i++)
	p[p[i].second].first=2;
	for(long int i=1;i<=n;i++)
	cout<<p[i].first<<" ";
	return 0;
}