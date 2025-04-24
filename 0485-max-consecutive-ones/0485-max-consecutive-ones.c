int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i,c,grt;
    grt=0;
    c=0;
    for(i=0;i<numsSize;i++)
    {
    if(nums[i]==1)
    c++;
    else
    {
    if(grt<c)
    grt=c;
    c=0;
    }
    if(grt<c)
    grt=c;
    }
    return grt;
}