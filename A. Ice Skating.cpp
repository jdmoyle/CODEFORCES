#include <iostream>
#include<cstring>
#include<queue>
using namespace std;

const int N=101;

int n;
bool vis[N];
pair<int,int> adj[N];
queue<int> q;
/*
void dfs(int s){
	vis[s]=true;
	for(int i=1;i<=n;i++){
		if(vis[i]==false && (adj[s].first==adj[i].first || adj[s].second==adj[i].second) )
		dfs(i);
	}
}
*/
void bfs(int s){
	q.push(s);
	vis[s]=true;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(vis[i]==false && (adj[u].first==adj[i].first || adj[u].second==adj[i].second)){
				q.push(i);
				vis[i]=true;
			}
		}
	}
}

int main() {
	cin>>n;
	memset(vis,false,sizeof(vis));
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		adj[i]={x,y};
	}
	
	int ans=0;
	for(int i=1;i<=n;i++){
		if(vis[i]==false){
			ans++;
			//dfs(i);
			bfs(i);
		}
	}
	cout<<ans-1;
	return 0;
}
