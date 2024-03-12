#include <bits/stdc++.h>
using namespace std;

int main() {

int c;
cin>>c;
while(c--){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(a[i]<=4){
            count++;
        }
    }
    if(count==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
