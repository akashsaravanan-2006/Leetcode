int maxAdjacentDistance(int* a, int n) {
    int i,j,grt,c;
    grt=0;
    j=0;
    for(i=0;i<n-1;i++)
    {
        c=abs(a[i]-a[i+1]);
        if(c>grt)
        {
            grt=c;
        }
    }
    j=abs(a[0]-a[n-1]);
    if(j>grt)
    {
        grt=j;
    }
        return grt;
    }