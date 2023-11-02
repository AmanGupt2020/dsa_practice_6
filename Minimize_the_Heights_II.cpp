class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
         sort(arr, arr+n);
        int max_height = abs(arr[n-1]- arr[0]);
        
        for(int i=1; i<n; i++){
            if(arr[i] - k >=0){
                int a = max(arr[i-1]+k, arr[n-1]-k);
                int b = min(arr[i]-k, arr[0]+k);
                
                max_height = min(max_height, abs(a-b));
            }
        }
        
        return max_height;
        // code here
    }
};
