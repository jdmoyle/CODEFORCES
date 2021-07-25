#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	
	int d,j=1;
	int n1=n;
	
	for( d=1;n1>0;)
	{
		n1=n1-m;
		if(n1>=m)
		{
			j++;
		}
		if(n1<=0)
		break;
		d++;
	}
	//cout<<d<<" "<<j<<endl;
	int r1=(n-m*d);
	if(r1<0)
	r1=0;
	
	int r2=n-m*j;
	if(r2<0)
	r2=0;
	
	int ans1=b*d+r1*a;
	int ans3=b*j+r2*a;
	int ans2=n*a;
	
	int ans=min(ans1,min(ans2,ans3));
	cout<<ans<<endl;
	return 0;
}
