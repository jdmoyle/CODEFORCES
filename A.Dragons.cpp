#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	int s,n;
	cin>>s>>n;
 
	vector<pair<int,int>> power;
 
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
 
		power.push_back({x,y});
	}
 
	sort(power.begin(),power.end());
 
	for(auto p:power)
	{
		if(s>p.first)
		s+=p.second;
		else
		{
			cout<<"NO";
			return 0;
		}
	}
 
	cout<<"YES";
	return 0;
}
