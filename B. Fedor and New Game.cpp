#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,k;
	cin>>n>>m>>k;
	int soldier[m+2];
	for(int i=1;i<m+2;i++){
		int x;
		cin>>x;
		soldier[i]=x;
	}
	int ans=0;
	for(int i=1;i<m+1;i++){
		int d=soldier[i]^soldier[m+1];
		int c=__builtin_popcount(d);
		if(c<=k)
		ans++;
	}
	cout<<ans;
	return 0;
}
