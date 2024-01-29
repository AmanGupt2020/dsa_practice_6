#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        string s="normal";
        while(a--){
            if(s=="normal"){
                s="huge";
            }
            else if(s=="huge"){
                s="small";
            }
            else if(s=="small"){
                s="normal";
            }
        }
        cout<<s<<endl;
        
        
    }
	
return 0;
}
