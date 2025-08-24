bool findSubarrays(int* nums, int numsSize) {
    int a[10000],i,j,k,f,c,m=0;
    for(i=0;i<numsSize-1;i++)
    a[m++]=nums[i]+nums[i+1];
    for(i=0;i<m;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        if(a[i]==a[j])
        {
            f=0;
            break;
        }
        c=0;
        if(f==1)
        {
            for(k=i;k<m;k++)
            if(a[i]==a[k])
            c++;
            if(c>=2)
            return true;
        }
    }
    return false;
}