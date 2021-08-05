#include <iostream>
#include<vector>
using namespace std;

int main() {
	int k;
	cin>>k;
	string s;
	cin>>s;
	int n=s.size();
	if(k==1){
		cout<<s;
		exit(0);
	}
	vector<int> cnt(26,0);
	for(int i=0;i<n;i++){
		cnt[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(cnt[i]%k!=0){
			cout<<-1<<endl;
			exit(0);
		}
	}
	string ans="";
	for(int i=0;i<26;i++){
		if(cnt[i]!=0){
			int m=cnt[i]/k;
			while(m--)
			ans+=i+'a';
		}
	}
	for(int i=0;i<k;i++)
	cout<<ans;
	return 0;
}
