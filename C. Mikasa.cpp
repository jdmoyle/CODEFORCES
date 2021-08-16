#include<iostream>
using namespace std;
 
int main(){
    int n,m,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int last = 31;
        int ans = 0;
        while(last>0){
            for( int i = 0; i<=31;i++){
                int x = n| ((1<<i)-1);
                if( x> m){
                    ans|= (1<<i)>>1;
                    n |= (1<<i)>>1;
                    last = i;
                    break;
                }
            }
        }
        cout<<ans;
 
        cout<<endl;
    }
    return 0;
}
