#include <bits/stdc++.h>
#include<vector>
using namespace std;

int n ,m,ans=0;
vector<int> tree[1000001];
vector<int> visited(100001,false);
int a[100001];
int cnt[100001];

void dfs(int u)
{
	visited[u]=true;
	if(a[u]==1)
	{
		cnt[u]++;
	}
	else
	cnt[u]=0;
	
	if(cnt[u]>m)
	{
		//c==0;
		return;
	}
	//cout<<u<<" ";
	
	for(int v:tree[u])
	{
		if(visited[v]==false && cnt[v]<=m)
		{
			cnt[v]=cnt[u];
			
			dfs(v);
			//cout<<v<<" ";
			
		}
	}
  //leaf root contains only 1 edge and also the starting root may have 1 edge.
	if(u!=1 && cnt[u]<=m && tree[u].size()==1)
	ans++;
	
}

int main() {
	
	cin>>n>>m;
	
	memset(cnt,0,sizeof(cnt));
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		
		
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	
	
	dfs(1);
	
	cout<<ans<<endl;
	
	return 0;
}
