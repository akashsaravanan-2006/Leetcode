int findLengthOfLCIS(int* nums, int numsSize) {
    int i,grt,c=0,f=1,m=0,a[100000];
    grt=0;
    for(i=0;i<numsSize;i++)
    a[m++]=nums[i];
    a[m]=0;
    for(i=0;i<m;i++)
    {
    if(a[i]<a[i+1])
    c++;
    else
    {
        f=0;
        if(grt<c)
        grt=c;
        c=0;
    }
    }
    if(f==1)
    return numsSize;
    return grt+1;
    
}