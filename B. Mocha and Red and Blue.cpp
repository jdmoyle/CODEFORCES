#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
 
int main(){
    int tc;
    cin>>tc;
    while(tc--){
    	int n;
    	cin>>n;
        string s;
        cin>>s;
 
        int start = -1;
        for(int i = 0; i< s.size(); i++){
        	if(s[i] != '?'){
        		start=i;
        		break;
        	}
        }
        if(start == -1)
        {
        	s[0] = 'B';
        	start = 0;
        }
        string ans= "";
        cout<<start<<endl;
        for(int i = 0;i<start;i++){
        	if(start% 2!= 0 ){
        		if(s[start] == 'R'){
        			ans += i%2 == 0 ? "B":"R"; 
        		}
        		else
        		ans+= i%2 == 0?"R":"B";
        	}else{
        		if(s[start] == 'R'){
        			ans += i%2 == 0 ? "R":"B"; 
        		}
        		else
        		ans+= i%2 == 0?"B":"R";
        	}
        }
        char prev= s[start];
        ans+=s[start];
        for(int i =start+1;i<s.size();i++){
        	if(s[i] == '?'){
        		if(prev == 'B')
        		{
        			ans+="R";
        			prev = 'R';
        		}
        		else{
        			ans+="B";
        			prev = 'B';
        		}
        	}
        	else{
        		ans+= s[i];
        		prev = s[i];
        	}
        }
        cout<<ans<<endl;
    }
    return 0;
}
