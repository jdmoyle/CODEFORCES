#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> adj;
vector<bool>vis;
vector<int> ans;

int n,m,k;

//Storing EULER PATH

void dfs(int u)
{   vis[u]=true;
	ans.push_back(u);
	for(int v:adj[u])
	{
		if(!vis[v])
		{
			dfs(v);
			ans.push_back(u);
		}
		
	}
	
}


int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>n>>m>>k;
	
	adj.resize(n+1);
	vis.assign(n+1,false);
	
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		
		if(u==v) continue;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	dfs(1);
	
	
	//max number of vertices a clone can move +1, +1 is for easy indexing;
	int step=(2*n-1)/k +1;
	//dividing the euler path wrt k;
	for(int i=0;i<k;i++)
	{
		int beg=i*step,end=min((i+1)*step,(int)ans.size());
		
		if(beg>=end)
		{
			cout<<"1 1"<<endl;
			continue;
		}
		
		cout<<(end-beg)<<" ";
		
		for(int j=beg;j<end;j++)
		{
			cout<<ans[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
