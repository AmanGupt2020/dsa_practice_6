#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=0,wid=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            len++;
        }
        else if(s[i]==')'){
            wid++;
        }
    }
    cout<<min(len,wid)+min(len,wid)<<endl;
    return 0;
}
