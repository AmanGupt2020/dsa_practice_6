#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int sum=a+b;
        int count=0;
        while(sum>0){
            int r=sum%10;
            if(r==1){
                count=count+2;
            }
            else if(r==7){
                count=count+3;
            }
            else if(r==4 ){
                count=count+4;
            }
             else if(r== 2 || r==3 || r==5 ){
                count=count+5;
            }
             else if(r==0 || r==6 || r==9){
                count=count+6;
            }
             else if(r==8 ){
                count=count+7;
            }
            
            
            sum=sum/10;
        }
        cout<<count<<endl;
    }
	return 0;
}
