#include <iostream>
#include<vector>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int a[n];
	vector<long long> s(n+1,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
		s[i+1]=s[i]+a[i];
	}
	
	int j;
	long long min=10000000000;
	for(int i=0;i+k<=n;i++){
		long long  sum=s[i+k]-s[i];
		if(sum<min){
			min=sum;
			j=i;
		}
	}
	cout<<j+1;
	return 0;
}
