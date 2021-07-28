#include <iostream>
using namespace std;

int main() {
	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
	int n;
	cin>>n;
	
	char s[n];
	
	for(int i=0;i<n;i++)
	{
		char ch;
		cin>>ch;
		s[i]=ch;
	}
	
	for(int i=0,j=n/2;i<n/2;i++,j++)
	{
		if(s[i]=='R' && s[j]=='L')
		cout<<j+1<<" "<<i+1<<endl;
		else
		cout<<i+1<<" "<<j+1<<endl;
	}
	return 0;
}
