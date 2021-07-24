#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
	int n;
	cin>>n;
 
	bool used[100];
	memset(used,false,sizeof(used));
	int a,b;
	cin>>a>>b;
 
	for(int i=1;i<n;i++)
	{
		int l,r;
		cin>>l>>r;
 
		for(int j=l;j<r;j++)
		used[j]=true;
	}
	int sum=0;
 
	for(int i=a;i<b;i++)
	{
		if(used[i]==false)
		sum++;
	}
 
	cout<<sum;
 
	return 0;
}
