#include <iostream>
using namespace std;

int main() {
	string s1,s2;
	cin>>s1>>s2;
	
	int n1=s1.size(),n2=s2.size();
	if(n1!=n2 || n1<2)
	{
		cout<<"NO";
		exit(0);
	}
	int c=0;
	int p=4;
	string s;
	int j=0;
	for(int i=0;i<n1;i++)
	{
		if(s1[i]!=s2[i])
		{
			s+=s1[i];
			c++;
			s+=s2[i];
		}
		if(c>2)
		{
			cout<<"NO";
			exit(0);
		}
	}
	if(c!=2)
	cout<<"NO";
	else if(s[0]==s[3] && s[1]==s[2])
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
