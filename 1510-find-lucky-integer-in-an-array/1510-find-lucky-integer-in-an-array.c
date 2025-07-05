int findLucky(int* nums, int numsSize) {
    int i,j,f,c,k;
    for(i=0;i<numsSize;i++)
    for(j=i+1;j<numsSize;j++)
    if(nums[i]<nums[j])
    {
        c=nums[i];
        nums[i]=nums[j];
        nums[j]=c;
    }
    for(i=0;i<numsSize;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        if(nums[i]==nums[j])
        {
            f=0;
            break;
        }
        c=0;
        if(f==1)
        {
            for(k=i;k<numsSize;k++)
            if(nums[i]==nums[k])
            c++;
            if(c==nums[i])
            {
              return c;
            }
        }
    }
     
    return -1;
}