/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    
    public:
    static bool cmp(Job &j1, Job &j2){
        return j1.profit>j2.profit ;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int ans=0 ;
        int cnt=0 ;
        sort(arr,arr+n,cmp) ;
        int ma=0 ;
        for(int i=0;i<n;i++){
            ma=max(ma, arr[i].dead) ;
        }
        vector<bool> check(ma+1,0) ;
        for(int i=0; i<n; i++){
            int x= arr[i].dead ;
            for(int j=x;j>=1;j--){
                if(check[j]==0){
                    check[j]=1 ;
                    cnt++ ;
                    ans+=arr[i].profit ;
                    break ;
                }
            }
        }
        return {cnt, ans} ;
    }
    
    
    
     
};
