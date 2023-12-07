#include<bits/stdc++.h>
using namespace std;
main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0 && arr[i]%7==0){
                cout<<"Alice"<<"\n";
                
            }
        else if(arr[i]%2==1 && arr[i]%9==0){
            cout<<"Bob"<<"\n";
            
        }
        else{
            cout<<"Charlie"<<"\n";}
        }
        
    
    return 0;
}
