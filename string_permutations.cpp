#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    //vector<int>v(n);
    if(s.size()!=s1.size()){
        cout<<"no";
        return 0;
    }
    map<char,int>m1;
    map<char,int>m2;
    for(int i=0;i<s.size();i++){
        m1[s[i]]++;
        m2[s1[i]]++;
    }
    if(m1==m2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
    return 0;
}
