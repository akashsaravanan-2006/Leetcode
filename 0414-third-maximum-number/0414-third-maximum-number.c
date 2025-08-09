int thirdMax(int* nums, int numsSize) {
    int i,j,k=0,f,c;
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
        nums[k++]=nums[i];
    }
    for(i=0;i<k;i++)
    for(j=i+1;j<k;j++)
    if(nums[i]<nums[j])
    {
        c=nums[i];
        nums[i]=nums[j];
        nums[j]=c;
    }
    if(k<3)
    return nums[0];
    return nums[2];
}