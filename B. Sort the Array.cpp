#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n+1),b(n+1);
	int k=0,l=1000000,r=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b.begin(),b.end());
	map<int,int> m;
	for(int i=1;i<=n;i++){
		m[b[i]]=i;
	}
	//storing indexes of sorted array in original array
	for(int i=1;i<=n;i++){
		a[i]=m[a[i]];
	}
	for(int i=1;i<=n;i++){
		if(a[i]!=i){
			l=min(l,i);
			r=max(r,i);
		}
	}
	if(l==1000000 && r==0){
		cout<<"yes"<<endl;
		cout<<1<<" "<<1<<endl;
		return 0;
	}
	reverse(a.begin()+l,a.begin()+r+1);
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=i){
			cout<<"no";
			exit(0);
		}
		
	}
	cout<<"yes"<<endl;
	cout<<l<<" "<<r<<endl;
	return 0;
}
