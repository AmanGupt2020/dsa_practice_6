  long long totalsum=0;
       
       if(n==1)return 1;
       
       for(int i=0 ; i< n ; i++)
       {
           totalsum+=a[i];
       }
       
        long long left=0;
        long long right=totalsum;
        
        
        for(int i=0 ; i< n ; i++)
        {
            right-=a[i];
            
            if(left==right)
            {
                return i+1;
            }
            
            left+=a[i];
        }
        return -1;
