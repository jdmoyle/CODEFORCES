#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n,tc;
    cin>>n>>tc;
    
    string s;
    cin>>s;
    
    string t="abc";
    //storing possible answers for each paremutation of "abc";
    int v[6][n+1]={0};
    int curr=0;
    do{
        for(int i=0;i<n;i++)
        v[curr][i+1]=v[curr][i]+ (s[i]!=t[i%3]);
        curr++;
    }while(next_permutation(t.begin(),t.end()));
    
    while(tc--){
        int l,r;
        cin>>l>>r;
        
        int ans=INT_MAX;
        for(int i=0;i<6;i++){
            ans=min(ans,v[i][r]-v[i][l-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
