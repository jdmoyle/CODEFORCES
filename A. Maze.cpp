#include <iostream>
#include<vector>
#include<cstring>
using namespace std;

const int N = 501;
char maze[N][N];
bool vis[N][N];

int a[4] = {1,0,0,-1};
int b[4] = {0,1,-1,0};
int n,m,k,sx,sy,s=0,cnt=0;

bool check(int x,int y){
	if( x < 0 || y < 0 || x >= n || y >= m )
	return false;
	
	return true;
}

void dfs(int ux,int uy){
	
	vis[ux][uy] = true;
	cnt++;
	if(cnt>s-k)
	maze[ux][uy]='X';
	for(int i = 0;i < 4;i++){
		int vx = ux+a[i],vy = uy+b[i];
		if( vis[vx][vy] == false && check(vx,vy) && maze[vx][vy]=='.'){
			dfs(vx,vy);
		}
	}
}


int main() {
	cin>>n>>m>>k;
	
	memset(vis,false,sizeof(vis));
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			char ch;
			cin >> ch;
			maze[i][j] = ch;
			if( ch == '.'){
				sx=i,sy=j;
				s++;
			}
		}
	}
	
	dfs(sx,sy);
	for(int i=0;i<n;i++)
	puts(maze[i]);
	return 0;
}
