#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int n;
	    cin>>n;
	    vector<pair<int,int>>vect;
	    vector<int>vect2;
	    
	    
	    for(int i=0;i<n;i++){
	        int p,j;
	        cin>>p>>j;
	        vect.push_back( make_pair(p,j) );
	    }
	    int no;
	    
	   int sum=0;
	    for(int i=0;i<n;i++){
	        if(vect[i].first<=8 && vect[i].first!=0){
	        no=vect[i].second;
	    }
	    else{
	        no=0;
	    }
	        for(int j=i+1;j<n;j++){
	            if(vect[i].first==vect[j].first && vect[i].first<=8 && vect[i].first!=0){
	                
	                if(no<=vect[j].second){
	                    no=vect[j].second;
	                    
	                    
	                }
	                vect[j].first=0;
	                
	            }
	            
	        }
	        sum=sum+no;
	       
	    }
	    
	    cout<<sum<<endl;
	    
	}
	return 0;
}
