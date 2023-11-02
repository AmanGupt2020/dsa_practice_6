class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int xp=-1,yp=-1,mindist=INT_MAX,j;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
                xp=i;
              if(a[i]==y)
                 yp=i;
            if(xp!=-1 && yp!=-1)
            {
            int dist=abs(xp-yp);
           mindist=min(mindist,dist);
            }
        }
        if(xp!=-1&&yp!=-1)
        return mindist;
        else
        return -1;
  }
};
