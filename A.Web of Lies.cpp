#include <iostream>
#include<algorithm>
using namespace std;

int n,m,q;
int main() {
	cin>>n>>m;
	
	int frnds[n+1]={0};
	int noble=n;
	
	for(int i=0;i<m;i++){
		int x,y;
		cin >> x>>y;
		//x--,y--;
		if(x>y) swap(x,y);
		
		if( frnds[x]==0)
		noble--;
		frnds[x]++;
	}
	
	
	cin>>q;
	for(int i = 0;i < q;i++){
		int t;
		cin>>t;
		int ans=0;
		if(t==3){
			cout<<noble<<endl;
			continue;
		}
		if( t == 1){
			int x,y;
			cin>>x>>y;
			//x--,y--;
			if(x>y) swap(x,y);
			
			if(frnds[x]==0)
			noble--;
			frnds[x]++;
			continue;
		}
		if( t== 2){
			int x,y;
			cin>>x>>y;
			//x--,y--;
			if(x>y) swap(x,y);
			
			frnds[x]--;
			if(frnds[x]==0)
			noble++;
			
			continue;
		}
	}
	return 0;
}
