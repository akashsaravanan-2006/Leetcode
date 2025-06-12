int minimumSum(int* nums, int numsSize) {
    int i,j,k,sml,s;
    sml=10000;
    for(i=0;i<numsSize;i++)
    for(j=i+1;j<numsSize;j++)
    for(k=i+2;k<numsSize;k++)
    if(nums[i]<nums[j] && nums[k]<nums[j] && i<j && j<k && k>i)
    {
        s=nums[i]+nums[j]+nums[k];
        if(s<sml)
        sml=s;
    }
    if(sml!=10000)
    return sml;
    return -1;
}