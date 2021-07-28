#include <iostream>
#include<set>
using namespace std;

string drinks[]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};


int main() {
	int n;
	cin>>n;
	
	string s;
	int ans=0;
	
	set<string> d(drinks,drinks+11);
	
	for(int i=0;i<n;i++)
	{
		cin>>s;
		
		if(!isalpha(s[0]))
		{
			if(stoi(s)<18) //age less than 18 ,then have to check what is his drink
			ans++;
		}
		else
		{
			if(d.find(s)!=d.end()) //drinking alcohol than check what is his age
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
