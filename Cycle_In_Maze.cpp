#include <iostream>
#include<vector>
#include<queue>
using namespace std;

bool isValid(int x,int y,int n,int m)
{
	if(x<0||y<0||x>=n||y>=m)
	return false;
	
	return true;
}


int main() {
	
	int n,m,k;
	cin>>n>>m>>k;
	
	char maze[n][m];
	
	int dis[n][m];
	
	queue<pair<int,int>> q;
	
	int cnt=0; // counting '.'
	
	int xx,yy;//indices of 'X'
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>maze[i][j];
			
			dis[i][j]=1e9;
			
			if(maze[i][j]=='X')
			{
				xx=i,yy=j;
				q.push({i,j});
			}
			
			if(maze[i][j]=='.')
			cnt++;
			
		}
	}
	if((k&1))
	{
		cout<<"IMPOSSIBLE"<<endl;
		return 0;
	}
	
	if(cnt==0)
	{
		cout<<"IMPOSSIBLE"<<endl;
		return 0;
	}
	
	dis[xx][yy]=0;
	
	int a[]={1,0,0,-1};
	int b[]={0,-1,1,0};
	char moves[]={'D','L','R','U'};
	
	
	//storing shortest distance of '.'cells from 'X';
	while(!q.empty())
	{
		pair<int,int> u=q.front();
		int f=u.first;
		int s=u.second;
		q.pop();
		
		for(int i=0;i<4;i++)
		{
			int x=f+a[i];
			int y=s+b[i];
			if(isValid(x,y,n,m)&&maze[x][y]!='*'&& dis[x][y]>dis[f][s]+1)
			{
				q.push({x,y});
				dis[x][y]=dis[f][s]+1;
				//cout<<dis[x][y]<<" ";
			}
		}
	}
	
	//for storing the path
	string ans;
	
	for(int i=1;i<=k;i++)
	{
		int x,y;
		int c=0;
		int j;
		for(j=0;j<4;j++)
		{
			 x=xx+a[j];
			 y=yy+b[j];
			 
			if(isValid(x,y,n,m)&&maze[x][y]!='*'&&dis[x][y]<=k-i)
			{
				break;
			}
			c++; //incrementing the invalid directions;
		}
		
		//if no direction is valid to move from any cell
		if(c==4)
		{
			cout<<"IMPOSSIBLE"<<endl;
			return 0;
		}
		xx=x;
		yy=y;
		ans=ans+moves[j];
	}
	cout<<ans<<endl;
	return 0;
}
