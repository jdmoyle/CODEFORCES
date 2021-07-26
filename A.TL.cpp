#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int n,m;
	cin>>n>>m;
	
	int c=0,w=101,s=101;
	
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s=min(s,a);
		c=max(c,a);
	}
	for(int i=0;i<m;i++)
	{
		int a;
		cin>>a;
		w=min(w,a);
	}
	
	int tl=w-1;
	
	if(2*s<=tl && c<=tl)
	cout<<min(tl,max(c,2*s));
	else
	cout<<-1;
	return 0;
}
