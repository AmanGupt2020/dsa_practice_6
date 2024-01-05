#include <iostream>
using namespace std;

int main() {
	int T,P,Q,R,S;
	cin>>T;
	while(T--)
    {
        cin>>P>>Q>>R>>S;
        if(P>(Q+R+S) || Q>(P+R+S) || R>(Q+P+S) || S>(Q+R+P))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
