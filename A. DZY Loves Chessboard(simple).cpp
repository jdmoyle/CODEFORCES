#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	char ch;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ch;
			if(ch=='.')
			{
				if((i+j)&1)
				cout<<'W';
				else
				cout<<'B';
			}
			else cout<<ch;
		}
		cout<<endl;
	}
	return 0;
}
