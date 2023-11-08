#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	    int N,M,K;
	    cin >> N >> M >> K;
	    int eat = K*M;
	    
	    if(N > eat)
	    {
	        cout << "NO";
	    }
	    
	    else
	    {
	        cout << "YES";
	    }
	    
	    cout << endl;
	}
	return 0;
}
