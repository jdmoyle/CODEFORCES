#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
 
	int n;
	cin>>n;
 
 
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
 
		if(x!=y)
		{
			cout<<"Happy Alex";
			return 0;
		}
 
	}
 
	cout<<"Poor Alex";
	return 0;
}

