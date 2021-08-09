#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum1[n+1]={0};
        int sum2[n+1]={0};
        
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            sum1[i]=sum1[i-1]+x;
        }
        for(int i=1; i<=n;i++){
            int y;
            cin>>y;
            sum2[i]=sum2[i-1]+y;
        }
        int a,ans=INT_MAX;
        for(int i=1;i<=n;i++){
            a=max(sum2[i-1],sum1[n]-sum1[i]);
            ans=min(ans,a);
        }
        cout<<ans<<endl;
    }
    return 0;
}
