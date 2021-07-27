#include <iostream>
#include<vector>
using namespace std;
const int N=3002;

vector<bool> used(N,false);
int main() {
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int r;
		cin>>r;
		used[r]=true;
	}
	
	for(int i=1;i<=3001;i++)
	{
		if(used[i]==false)
		{
			cout<<i;
			exit(0);
		}
	}
	return 0;
}
