#include <iostream>
using namespace std;

int power(int k,int l)
{
	int ans=0,r;
	while(k<=l)
	{
		if(l==k)
		return ans;
		r=l%k;
		if(r!=0)
		return -1;
		l/=k;
		ans++;
		
	}
	return -1;
}

int main() {
	int k,l;
	cin>>k>>l;
	
	int ans=power(k,l);
	if(ans==-1)
	cout<<"NO";
	else
	cout<<"YES\n"<<ans;
	return 0;
}
