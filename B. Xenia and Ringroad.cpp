#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int prev=1;
	long long ans=0;
	for(int i=1;i<=m;i++){
		int x;
		cin>>x;
		if(prev<=x){
			ans+=1LL*(x-prev);
			prev=x;
		}
		else{
			ans+=1LL*(n-prev+x);
			prev=x;
		}
	}
	cout<<ans;
	return 0;
}
