#include <iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
	int n;
	cin>>n;
	queue<int> q;
	int deg[n],xs[n];
	for(int i=0;i<n;i++){
		cin>>deg[i]>>xs[i];
		if(deg[i]==1) q.push(i);
	}
	vector<pair<int,int>> adj; 
	while(!q.empty()){
		int u=q.front();
		q.pop();
		if(deg[u]<1) continue;
		deg[u]--;
		int v=xs[u];
		xs[u]=0;
		//if xorsum of a^b=c then a^c=b and b^c=a;
		xs[v]^=u;
		adj.push_back({u,v});
		deg[v]--;
		if(deg[v]==1)
		q.push(v);
	}
	cout<<adj.size()<<endl;
	for(auto it: adj){
		cout<<it.first<<" "<<it.second<<endl;
	}
	return 0;
}
