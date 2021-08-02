#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	int a=-1,p=-1;
	int k=s.size()-1;
	for(int i=k-1;i>=0;i--){
		if(s[i]%2==0 && s[i]<s[k])
		a=i;
		if(s[i]%2==0 && s[i]>s[k]){
			if(p==-1)
			p=i;
			continue;
		}
	}
	if(a==-1){
		if(p==-1){
			cout<<a;
			exit(0);
		}
		else{
			swap(s[k],s[p]);
			cout<<s;
			exit(0);
		}
	}
	swap(s[a],s[k]);
	cout<<s;
	return 0;
}
