#include <bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
#define ll long long 

const int N=1000000;
vector<bool> isPrime(N+1,true);
set<ll> tprime;

void sieve(){
	isPrime[0]=isPrime[1]=false;
	for(ll i=2;i<=N;i++){
		if(isPrime[i]==true)
		for(ll j=i*i;j<=N;j+=i){
			isPrime[j]=false;
		}
	}
}
bool check(ll x){
	double sqx=sqrt((double)x);
	if(sqx==(int)sqx)
	return true;
	return false;
}

int main() {
	int n;
	cin>>n;
	sieve();
	for(int j=0;j<n;j++){
		ll a;
		cin>>a;
		if(check(a) && isPrime[sqrt((double)a)])
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
