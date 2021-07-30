#include <iostream>
using namespace std;
 
long long int frnd(long long int n){
	return n*(n-1)/2;
}
 
int main() {
	long long int n,m;
	cin>>n>>m;
	long long int mn=frnd(n/m)*(m-(n%m))+frnd((n/m+1))*(n%m);
	long long int mx=frnd(n-m+1);
	cout<<mn<<" "<<mx;
	return 0;
}
