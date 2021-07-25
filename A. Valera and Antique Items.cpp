#include <iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	int n,v,c=0;
	cin>>n>>v;
	
	set<int> ans;
	vector<bool> cnt(n+1,false);
	for(int j=1;j<=n;j++)
	{
		int ni;
		cin>>ni;
		for(int i=1;i<=ni;i++)
		{
			int s;
			cin>>s;
			if(s<v)
			{
				cnt[j]=true;
				ans.insert(j);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(cnt[i]==true)
		c++;
	}
	cout<<c<<endl;
	for(auto it:ans)
	{
		cout<<it<<" ";
	}
	return 0;
}
