#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	
	if(n<2 )
	{
		cout<<"no";
		return 0;
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++){
			int p=min(a[i],a[i+1]),q=min(a[j],a[j+1]);
			int r=max(a[i],a[i+1]),s=max(a[j],a[j+1]);
			if((p<q && q<r && r<s) || (r<p && p<s && s<r))
			{
				puts("yes");
				exit(0);
			}
		}
	}
	
	cout<<"no";
	return 0;
}
