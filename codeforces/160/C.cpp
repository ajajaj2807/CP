#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int a[n+1];
	for(long int i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+n+1);
	vector<pair<long int,long int>> x;
	long int temp=0,aa=a[1];
	for(long int i=1;i<=n;i++)
	{
	    if(a[i]!=aa)
	    {
	        x.push_back({aa,temp});
	        temp=1;
	        aa=a[i];
	    }
	    else
	    temp++;
	}
	x.push_back({aa,temp});
	for(long int i=0;i<x.size();i++)
	{
	    if(k>(x[i].second*n))
	    {
	        k-=x[i].second*n;
	    }
	    else
	    {
	        k=k/x[i].second+(bool)(k%x[i].second);
	        cout<<x[i].first<<" "<<a[k];
	        return 0;
	    }
	}
	return 0;
}