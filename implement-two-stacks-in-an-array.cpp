//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks
{
     array< int, 100 > a;
    int t1, t2;
    public:
    
     twoStacks( int n = 100 ) : t1( -1 ), t2( n ) {}
    void push1( int x ) { if ( t1+1 < t2 ) a[ ++t1 ] = x; }
    void push2( int x ) { if ( t2-1 > t1 ) a[ --t2 ] = x; }
    int pop1() { return t1 >=  0 ? a[ t1-- ] : -1; }
    int pop2() { return t2 < 100 ? a[ t2++ ] : -1; }

};



//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends
