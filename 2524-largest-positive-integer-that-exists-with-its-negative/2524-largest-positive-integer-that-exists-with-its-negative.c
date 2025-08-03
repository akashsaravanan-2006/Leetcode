int findMaxK(int* nums, int numsSize) {
    int i,j,grt=-1;
    for(i=0;i<numsSize;i++)
    for(j=0;j<numsSize;j++)
    if(nums[i]==-nums[j] && nums[i]>=grt)
    grt=nums[i];
    return grt;
    
}