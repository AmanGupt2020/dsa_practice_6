#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int k;
	    cin>>k;
	    string s1,s2;
	    cin>>s1;
	    cin>>s2;
	    int z1=0;
	    int o1=0;
	    int z2=0;
	    int o2=0;
	    for(int i=0;i<s1.size();i++){
	        if(s1[i]=='1'){
	            o1++;
	        }
	        else if(s1[i]=='0'){
	            z1++;
	        }
	    }
	    for(int i=0;i<s2.size();i++){
	        if(s2[i]=='1'){
	            o2++;
	        }
	        else if(s2[i]=='0'){
	            z2++;
	        }
	    }
	    if(z1==z2 && o1==o2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
