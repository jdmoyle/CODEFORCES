#include <bits/stdc++.h>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
 
set<int> imp;
set<pair<int,int>> forbidden;
 
bool isOk(int a,int b)
{
	if(a>b)
	swap(a,b);
 
	return (forbidden.find({a,b})==forbidden.end());
}
 
void dfs(int s)
{
	vector<int> memo;
 
	for(int it:imp)
	{
		if(isOk(s,it))
		memo.push_back(it);
	}
	for(int it: memo)
	{
		imp.erase(it);
	}
 
	for(int it: memo)
	{
		dfs(it);
	}
}
 
 
 
int main() {
 
	int n,m,k;
	cin>>n>>m>>k;
 
	for(int i=2;i<=n;i++)
	imp.insert(i);
 
	int cnt=0;
	int no_of_edges=0;
 
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
 
		if(u>v)
		swap(u,v);
 
		if(u==1)
		{
			cnt++;
		}
 
		forbidden.insert({u,v});
		//forbidden.insert({v,u});
	}
 
	if(n-cnt-1<k)
	{
		cout<<"impossible"<<endl;
		return 0;
	}
 
	for(int i=2;i<=n;i++)
	{
		//if {1,i} is not in forbidden and if i is available for making an edge;
		if( isOk(1,i) && imp.find(i)!=imp.end())
		{
			dfs(i);
			no_of_edges++;
		}
	}
	cout<<no_of_edges;
 
	if(!imp.empty())
	{
		cout<<"impossible"<<endl;
		return 0;
	}
	if(no_of_edges>k)
	{
		cout<<"impossible"<<endl;
		return 0;
	}
	cout<<"possible"<<endl;
 
	return 0;
}
