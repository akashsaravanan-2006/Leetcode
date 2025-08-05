int minOperations(int* nums, int numsSize, int k) {
    int i,j,f,m=0,c=0;
    for(i=0;i<numsSize;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        if(nums[i]==nums[j])
        {
            f=0;
            break;
        }
        if(f==1)
        nums[m++]=nums[i];
    }
    if(m==1 && k==nums[0])
    return 0;
    for(i=0;i<m;i++)
    {
    if(nums[i]>k)
    c++;
    if(nums[i]<k)
    return -1;
    }
    return c;
}