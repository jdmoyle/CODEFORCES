#include<iostream>
#include<vector>
#include<set>
using namespace std;
 
int n;
vector<vector<int>> adj;
set<int> morepaths[2];
 
void dfs(int s,bool vis , vector<int> &color){
 
    color[s] = 1;
    for(int v: adj[s]){
        if(color[v] == 0)
            dfs(v,vis,color);
        else if( vis )
            morepaths[ color[v] - 1 ].insert(v);
    }
    color[s] = 2;
}
 
int main(){
    int tc;
    cin>>tc;
 
    while(tc--){
        int m ;
        cin>>n>>m;
 
        adj = vector<vector<int>> (n);
        for(int i = 0 ; i< m; i++){
            int u,v;
            cin>> u >> v;
            u--,v--;
            adj[u].push_back(v);
        }
        vector<int> color(n,0);
 
        for(int i = 0;i < 2;i++)
        morepaths[i] = set<int> ();
 
        dfs(0,true,color);
 
        vector<vector<int>> c(2,vector<int> (n));
 
        for(int i = 0; i< 2; i++){
            for( auto it : morepaths[i]){
                dfs(it,false,c[i]);
            }
        }
 
 
        for(int i = 0; i< n;i++){
            int ans = 0;
            if(color[i] != 0){
                ans= 1;
                if( c[0][i] != 0)
                ans = -1;
                else if(c[1][i] != 0)
                ans = 2;
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}
