#include<iostream>
#include<map>
using namespace std;
int main(){
    int tc;
    cin>> tc;
    while(tc--){
        string s;
        cin>>s;
        map<char,int> cnt;
        int n = s.size();
        for(int i = 0; i<n;i++){
            cnt[s[i]]++;
        }
        int dup = 0;
        for(auto it:cnt){
            if(it.second >= 3){
                dup++;
                n-=it.second;
            }
        }
        int ans = n/2 + dup;
        cout<<ans<<endl;
    }
    return 0;
}
