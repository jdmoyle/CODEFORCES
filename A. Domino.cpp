#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int l=0,r=0;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		
		if(x%2 + y%2==1)
		{
			flag=true;
		}
		l+=x;
		r+=y;
	}
	if(l%2==0 && r%2==0) cout<<0;
	else if(l%2==1 and r%2==1 and flag==true) cout<<1;
	else cout<<-1;
	return 0;
}
