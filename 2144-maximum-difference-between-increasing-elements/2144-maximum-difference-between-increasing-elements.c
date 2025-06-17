int maximumDifference(int* nums, int numsSize) {
    int i,j,grt;
     grt=0;
     for(i=0;i<numsSize;i++)
     for(j=i+1;j<numsSize;j++)
     if(abs(nums[i]-nums[j])>grt && nums[i]<nums[j])
     {
        grt=abs(nums[i]-nums[j]);
     }
     if(grt!=0)
     return grt;
     return -1;
}