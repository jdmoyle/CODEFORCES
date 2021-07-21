#include <iostream>
#include<vector>
using namespace std;

typedef long long int  ll;
long long int a,b;


int main() {
	
	cin>>a>>b;
	
	vector<ll> path;
	
	int i;
	
	path.push_back(b);
	while(b>a)
	{
		
		if(b%2==0)
		{
			b/=2;
			path.push_back(b);
		}
		else if(b%10==1)
		{
			b/=10;
			path.push_back(b);
		}
		
		else
		{
			break;
		}
		if(b==a)
		break;
	
	}
	
	if(path[path.size()-1]!=a)
	{
		cout<<"NO";
		return 0;
	}
	
	cout<<"YES\n"<<path.size()<<"\n";
	for(int i=path.size()-1;i>=0;i--)
	{
		cout<<path[i]<<" ";
	}
	
	return 0;
}
