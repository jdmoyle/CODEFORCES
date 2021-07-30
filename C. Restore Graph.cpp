#include <iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int c=0;
	pair<int,int> d[n];
	queue<pair<int,int>> q;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		d[i]={x,i+1};
		if(x==0) {
			c++;
			q.push(d[i]);
		}
	}
	if(c>1 || c==0){
		cout<<-1;
		exit(0);
	}
	sort(d,d+n);
	vector<int> cnt(n+1,0);
	vector<int> adj[n+1];
	int ld=d[n-1].first,i=1,edges=0;
	while(!q.empty()){
		int u=q.front().second,dis=q.front().first;
		q.pop();
		while(i<n){
			int v=d[i].second;
			if(d[i].first==dis+1){
				cnt[u]++;
				cnt[v]++;
				if(cnt[u]>k) break;
				adj[u].push_back(v);
				//adj[v].push_back(u);
				//cout<<u<<" "<<v<<endl;
				edges++;
				
			}
			else break;
			q.push({d[i].first,d[i].second});
			i++;
		}
		if(q.empty() && i!=n)
		{
			cout<<-1;
			exit(0);
		}
	}
	cout<<edges<<endl;
	for(int i=1;i<=n;i++){
		for(auto it:adj[i]){
				cout<<i<<" "<<it<<endl;
		}
	}
	return 0;
}
