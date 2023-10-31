 int start =0, mid=0, end=n-1;
        while(mid<=end){
            if(a[mid]==0){
                swap(a[start], a[mid]);
                mid++;
                start++;
            }
            else if(a[mid]==2){
                swap(a[end], a[mid]);
                end--;
            }
            else if(a[mid]==1)
                mid++;
        }
