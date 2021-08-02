#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
	int n;
	cin>>n;
	pair<int,int> exam[n];
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		exam[i]=make_pair(a,b);
	}
	if(n>1)
	sort(exam,exam+n);
	int prev=min(exam[0].first,exam[0].second);
	
	for(int i=1;i<n;i++){
		int x=exam[i].first,y=exam[i].second;
		if(y>=prev){
			if(x<y)
			prev=x;
			else
			prev=y;
		}
		else prev=x;
	}
	cout<<prev;
	return 0;
}
