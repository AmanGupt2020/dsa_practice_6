#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int d;
    cin>>d;
    cout<<v[d];
    for(int i=1;i<n;i++){
        cout<<' '<<v[(i+d)%n];
    }
    
    
    return 0;
}
