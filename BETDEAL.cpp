#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define hashmap unordered_map<int,int> hash
#define hashset unordered_set<int> hash
#define createFrequencyTable for(int i=0;i<n;i++) hash[arr[i]]++;
#define setArray for(int i=0;i<n;i++) hash.insert(arr[i])
#define presentInSet (hash.find(a)!=hash.end())
#define pb push_back
#define min_heap priority_queue <int, vector<int>, greater<int>>
#define max_heap priority_queue<int>
#define arrayInput for(int i=0;i<n;i++) cin>>arr[i]
#define nahi cout<<"NO"<<endl
#define haan cout<<"YES"<<endl
#define sortArray sort(arr.begin(),arr.end())

int32_t main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        if((100-a)>(200-(2*b))) cout<<"SECOND"<<endl;
        else if((100-a)<(200-(2*b))) cout<<"FIRST"<<endl;
        else cout<<"BOTH"<<endl;
    }
    return 0;
}
