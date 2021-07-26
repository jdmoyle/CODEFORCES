#include <iostream>
#include<set>
#include<algorithm>
using namespace std;


int main() {
	int k;
	cin>>k;
	
	int c1=0,c2=0,c3=0,c4=0,a=0;
	set<int> ans;
	for(int i=0;i<k;i++)
	{
		int d;
		cin>>d;
		
		if(d==0 && c1==0)
		{
			ans.insert(d);
			c1=1;
			continue;
		}
		if(d==100 && c2==0)
		{
			ans.insert(d);
			c2=1;
			continue;
		}
		if(d%10==0 && c3==0)
		{
			ans.insert(d);
			c3=1;
			continue;
		}
		if(d<10 && c4==0)
		{
			ans.insert(d);
			c4=1;
			continue;
		}
		a=d;
	}
	
	if(!c3 && !c4 && a) ans.insert(a);
	
	cout<<ans.size()<<endl;;
	for(int it: ans)
	{
		cout<<it<<" ";
	}
	return 0;
}
