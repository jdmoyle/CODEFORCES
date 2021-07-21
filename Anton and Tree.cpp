#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
 
int n,n1,ans;
 
vector<int> visited;
vector<vector<int>> adj,adj1;
vector<int> dp;
vector<int> comp;
vector<int> colors;
 
 
void dfs(int u,int cmp,int a)
{
	if(colors[u]!=cmp)
	return;
	visited[u]=true;
	comp[u]=a;
	for(int v:adj[u])
	{
		if(visited[v]==false)
		dfs(v,cmp,a);
	}
}
 
 
void dfs2(int u,int p=-1)
{
	int max1=0,max2=0;
	for(int v:adj1[u])
	{
		if(v==p) continue;
		dfs2(v,u);
		int val=dp[v]+1;
		max2=max(max2,val);
		if(max1<max2)
		swap(max1,max2);
	}
	dp[u]=max1;
	ans=max(ans,max2+max1);
	
}
 
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n;
	
	n1=0;
	visited.assign(n+1,false);
	adj.resize(n+1);
	comp.resize(n+1);
	colors.resize(n+1);
	
	
	for(int i=0;i<n;i++)
	{
		cin>>colors[i];
		
	}
	
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		u--,v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	for(int i=0;i<n;i++)
	{
		if(visited[i]==false)
		{
			dfs(i,colors[i],n1++);
		}
	}
	adj1.resize(n1);
	dp.resize(n1);
	
	for(int i=0;i<n;i++)
	{
		for(int v:adj[i])
		{
			if(comp[i]!=comp[v])
			adj1[comp[i]].push_back(comp[v]);
		}
	}
	
	
	
	
	ans=0;
	dfs2(0);
	
	cout<<(ans+1)/2;
	
	return 0;
}
