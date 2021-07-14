
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


//we will start bfs from each police stations;   
//and check wether any city is gaurded by two police stations


//making adjacency list with the road index 'i';

void add_edge(int u,int v,int i,vector<pair<int,int>> adj[])
{
    adj[u].push_back({v,i});
    adj[v].push_back({u,i});
}

void bfs(int n,vector<pair<int,int>> adj[],queue<int> q,vector<bool> visited)
{
    vector<int> color(n,-1);
    
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
          for(auto val:adj[u])
            {
            	int v=val.first;
            	int index=val.second;
            	
                if(visited[v]==false)
                {
                	
                	visited[v]=true;
                	
                	//1 is for Imporant road,-1 for not importnt
                	color[index]=1; 
                	  
                	q.push(v);
                     
                    
                }
            }
          
    }
    
    vector<int> useless_roads;
    
    for(int i=1;i<n;i++)
    {
    	if(color[i]==-1)
    	useless_roads.push_back(i);
    }
    
    cout<<useless_roads.size()<<endl;
    for(int it:useless_roads)
    {
    	cout<<it<<" ";
    }
    cout<<endl;
    
}


int main()
{
   int n,k,d;
   cin>>n>>k>>d;
   
   vector<pair<int,int>> adj[n+1];
   
   vector<bool> visited(n+1,false);
   
   vector<int> dis(n+1,1000000000);
   
   queue<int> q;
   
   int p;
   for(int i=0;i<k;i++)
   {
       cin>>p;
       
        //keeping track of the cities with police stations,
		//we will start bfs from each police stations;
		//and check wether any city is gaurded by two police stations
       
       q.push(p);
       visited[p]=true;
       dis[p]=0;
   }
   
   for(int i=1;i<n;i++)
   {
       int u,v;
       cin>>u>>v;
       
       add_edge(u,v,i,adj);
   }
   
   bfs(n,adj,q,visited);
   
   return 0;
}
