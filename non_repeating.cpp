#include<bits/stdc++.h>  
using namespace std;

int solution(vector<int> v){
	int n = v.size();
	unordered_map<char,int>M;
	for(int i=0;i<n;i++){
		M[v[i]]++;	
	}
	char ans;
	for(auto it:M)
 {
     if(it.second==1)
     ans =  it.first;
 }
   
    for(int i=0;i<n;i++){
        if(v[i]==ans)
           return i;
    }
	return -1;
	
    }
	        
	    

int main(){
	int t;
    cin>>t;
    while(t--){
	    string s;
	    cin>>s;
	    vector<int>arr;
	    for(int i=0;i<s.length();i++){
		    char x = s[i];
		    arr.push_back(x);
	    }
	    cout<<solution(arr)<<endl;   

	}
    return 0;	
}	 
