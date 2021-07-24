#include <iostream>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	int n,m;
	cin>>n>>m;
 
 
	if(n<m)
	{
		cout<<-1;
		return 0;
	}
	//the mininum steps it requires to reach is n/2+n%2 and max is n steps;
	int s=n/2+n%2;
 
	for(int i=s;i<=n;i++)
	{
		if(i%m==0) {
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
