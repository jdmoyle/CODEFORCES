#include <iostream>
#include<algorithm>
using namespace std;
int  r1,c1,r2,c2;
 
int rook(){
	if(r1==r2 || c1==c2)
	return 1;
	else
	return 2;
}
int bishop(){
	int c=r1+c1;
	int d=r2+c2;
	if((c%2==0 && d%2==0) || (c%2!=0 && d%2!=0)){
		if(abs(r1-r2)==abs(c1-c2))
		return 1;
		else
		return 2;
	}
	else
	return 0;
}
 
int king(){
	int c=abs(r1-r2);
	int d=abs(c1-c2);
	return max(c,d);
}
 
int main() {
 
	cin>>r1>>c1>>r2>>c2;
 
	cout<<rook()<<" "<<bishop()<<" "<<king();
	return 0;
}
