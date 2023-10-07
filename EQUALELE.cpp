#include<bits/stdc++.h>
using namespace std;
     
int main()
{
    int t;
    cin>>t;
    while(t--)
    
    {
    
        int n;
        cin>>n;
        int a[n];
        vector<int> count(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            count[a[i]]++;
        }
     sort(count.begin(),count.end());
      int max = count[n];
   
   cout<<n-max<<endl;

    }
}
