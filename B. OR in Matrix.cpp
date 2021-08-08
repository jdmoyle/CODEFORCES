#include <iostream>
using namespace std;


int main() {
    int m, n;
	cin>>m>>n;
	
	int b[m][n];
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j = 0;j < n;j++){
			cin >> b[i][j];
			a[i][j]=1;
		}
	}
	
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			if( b[i][j] == 0){
				for(int k = 0;k < m;k++){
					a[k][j] = 0;
				}
				for(int k = 0;k < n;k++){
					a[i][k] = 0;
				}
			}
		}
	}
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			if(b[i][j] == 1){
				bool flag=false;
				for(int k = 0;k < m;k++){
					if( a[k][j] == 1){
						flag=true;
						break;
					}
				}
				if(flag == false)
				for(int k = 0;k < n;k++){
					if( a[i][k] == 1){
						flag = true;
						break;
					}
				}
				if(flag ==false){
					cout<<"NO";
					exit(0);
				}
			}
		}
	}
	cout<<"YES"<<endl;
	for(int i = 0;i<m;i++){
		for(int j = 0;j < n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
