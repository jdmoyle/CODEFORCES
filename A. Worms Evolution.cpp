#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j) continue;
			if(a[i]<a[j])
			continue;
			for(int k=j+1;k<n;k++)
			{
				if(k==j || k==i) continue;
				if(a[j]+a[k]==a[i])
				{
					cout<<i+1<<" "<<j+1<<" "<<k+1;
					return 0;
				}
			}
		}
	}
	cout<<-1;
	
	return 0;
}
