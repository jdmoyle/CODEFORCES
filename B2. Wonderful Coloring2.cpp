#include<iostream>
#include<vector>
#include<map>
using namespace std;

static bool cmp(pair<int,pair<int,int>> p1,pair<int,pair<int,int>> p2){
    return p1.first>=p2.first;
}

int main(){
    int tc;
    cin>> tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        
        int a[n]={0};
        
        map<int, vector<int>> indices;
        for(int i = 0; i<n;i++){
            int x;
            cin>>x;
            if(indices[x].size() < k)
            indices[x].push_back(i);
        }
        
        int m = 0;
        for(auto it: indices){
            m += it.second.size();
        }
        m -= m%k;
        int c = 0;
        for( auto it : indices){
            for( int i: it.second){
                a[i] = ++c;
                c%=k;
                m--;
                if( m == 0) goto output;
            }
        }
        output: 
        for(int i = 0; i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
        
    }
    return 0;
}
