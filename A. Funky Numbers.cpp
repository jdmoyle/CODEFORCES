#include <iostream>
#include<set>
using namespace std;

const int N=50000;
//stroing funky numbers <=1e9;
set<int> funky;

int main() {
	int n;
	cin>>n;
	
	for(int i=1;i<=N;i++)
	{
		int s=((long long)i*(i+1))/2;
		funky.insert(s);
	}
	
	for(auto it : funky){
		if(n-it>0 && funky.count(n-it))
		{
			cout<<"YES";
			exit(0);
		}
		if(n-it<=0)
		break;
	}
	cout<<"NO";
	return 0;
}
