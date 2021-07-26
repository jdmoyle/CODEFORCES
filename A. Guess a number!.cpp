#include <iostream>
#include<algorithm>
using namespace std;

const int N=1000000000;
int solve(string s,int m, char ch,int &ans)
{
	int cse;
	if( (s==">" && ch=='Y') || (s=="<=" && ch=='N') )
	ans=m+1,cse=0;
	if((s==">=" && ch=='Y') || (s=="<" && ch=='N'))
	ans=m,cse=1;
	if( (s=="<" && ch=='Y') || (s==">=" && ch=='N') )
	ans=m-1,cse=2;
	if((s=="<=" && ch=='Y') || (s==">" && ch=='N'))
	ans=m,cse=3;
	
	return cse;
}

int main() {
	int n;
	cin>>n;
	string s;
	int m;
	char ch;
	int l=-2*N,r=2*N;
	for(int i=0;i<n;i++)
	{
		int ans;
		cin>>s>>m>>ch;
		int c=solve(s,m,ch,ans);
		
		if(c==0 || c==1)
		{
			l=max(l,ans);
		}
		else if(c==2 || c==3)
		r=min(r,ans);
	}
	
	if(l>r)
	cout<<"Impossible";
	else
	cout<<l;
	
	return 0;
}
