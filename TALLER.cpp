#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x>y){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }

	return 0;
}
