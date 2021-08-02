#include <iostream>
#include<map>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	map<string,string> mp;
	for(int i=0;i<m;i++){
		string s1,s2;
		cin>>s1>>s2;
		if(s1.size()<=s2.size())
		mp[s1]=s1;
		else
		mp[s1]=s2;
	}
	for(int i=0;i<n;i++){
		string c;
		cin>>c;
		cout<<mp[c]<<" ";
	}
	return 0;
}
