#include <iostream>
#include<algorithm>
using namespace std;
int ans=0;

void solve(int cn,int ci,int ce ,int ct)
{
	if(cn<3 || ci<=0||ce<3||ct<=0)
	return;
	ans++;
	solve(cn-2,ci-1,ce-3,ct-1); //cn-3+1 because the word nineteen starts and ends with n,
	                            //the ending 'n' is available next word,there can be a case like 'nineteenineteenineteenin.....'
}

int main() {
	string s;
	cin>>s;
	
	int cn=0,ci=0,ct=0,ce=0;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='n')
		cn++;
		else if(s[i]=='i')
		ci++;
		else if(s[i]=='e')
		ce++;
		else if(s[i]=='t')
		ct++;
	}
	
	 
	
	solve(cn,ci,ce,ct);
	
	cout<<ans;
	return 0;
}
