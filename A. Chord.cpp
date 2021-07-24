#include <iostream>
using namespace std;

int main() {
	string notes[]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
	
	string chords[3];
	int check[3];
	int sum=0;
	for(int i=0;i<3;i++)
	{
		cin>>chords[i];
		
		for(int j=0;j<12;j++)
		{
			if(chords[i]==notes[j])
			{
				check[i]=j;
				break;
			}
		}
		
	}
	
	//cout<<check[0]<<check[1]<<check[2];
	
	int xy=check[1]-check[0],yz=check[2]-check[1];
	int yx=check[0]-check[1],zy=check[1]-check[2];
	int xz=check[2]-check[0],zx=check[0]-check[2];
	
	if(xy<0)
	xy+=12;
	if(yz<0)
	yz+=12;
	
	if(yx<0)
	yx+=12;
	if(zy<0)
	zy+=12;
	
	if(xz<0)
	xz+=12;
	if(zx<0)
	zx+=12;
	
	//cout<<endl<<xy<<yz<<endl<<xz<<zy<<endl<<yx<<xz<<endl<<yz<<zx<<endl<<zx<<xy<<endl<<zy<<yx<<endl;
	if( (xy==4 && yz==3) || (xz==4 &&zy==3) || (yx==4 && xz==3) || (yz==4 && zx==3) || (zx==4 && xy==3) || (zy==4 && yx==3) )
	cout<<"major";
	else if( (xy==3 && yz==4) || (xz==3 &&zy==4) || (yx==3 && xz==4) || (yz==3 && zx==4) || (zx==3 && xy==4) || (zy==3 && yx==4) )
	cout<<"minor";
	else
	cout<<"strange";
	
	return 0;
}
