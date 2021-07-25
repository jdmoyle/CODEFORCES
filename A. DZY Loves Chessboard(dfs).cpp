#include <iostream>
#include<cstring>
using namespace std;

int dx[4]={1,0,0,-1};
int dy[4]={0,1,-1,0};
int n,m;
const int N=101;
char board[N][N];
char ans[N][N];
bool visited[N][N];

bool isValid(int x,int y)
{
	return (x>0 &&y>0 &&x<=n && y<=m && board[x][y]=='.');
}

void dfs(int x,int y,bool flag)
{
	visited[x][y]=true;
	if(flag==false)
	ans[x][y]='B';
	else
	ans[x][y]='W';
	
	
	if(flag==false)
		flag=true;
	else
		flag=false;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i],ny=y+dy[i];
		if(isValid(nx,ny) && visited[nx][ny]==false)
		{
			dfs(nx,ny,flag);
		}
	}
}


int main() {
	
	cin>>n>>m;
	
	memset(visited,false,sizeof(visited));
	
	char ch;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>ch;
			board[i][j]=ch;
			ans[i][j]=ch;
		}
	}
	
	bool flag=false;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(visited[i][j]==false && board[i][j]=='.')
			dfs(i,j,flag);
		}
		
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
}
