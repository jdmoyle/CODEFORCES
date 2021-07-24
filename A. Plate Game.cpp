#include <iostream>
using namespace std;

int main() {
	
	int a,b,r;
	cin>>a>>b>>r;
	
	int d=2*r;
	
	//first player will place first circle at the centre;
	//so the second must place either to the left or to the right;
	//if the second is capable to put in either side there will always be a room for the first player
	//therefore only chance where the first player loses is if he cannot put the plate on the first move;
	
	if(d<=a && d<=b)
	cout<<"First";
	else
	cout<<"Second";
	
	
	return 0;
}
