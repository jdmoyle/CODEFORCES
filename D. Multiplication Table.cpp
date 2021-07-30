#include <iostream>
#include<algorithm>
using namespace std;
long long n,m,k;
long long binarysearch(long long l,long long r){
	if(l>r)
	return l;
	long long mid=l+(r-l)/2;
	long long cnt=0;
	for(long long i=1;i<=m;i++){
		cnt+=min((mid/i),n);
	}
	if(cnt<k)
	return binarysearch(mid+1,r);
	else
	return binarysearch(l,mid-1);
}

int main() {
	cin>>n>>m>>k;
	long long l=1,r=n*m;
	cout<<binarysearch(l,r);
	return 0;
}
