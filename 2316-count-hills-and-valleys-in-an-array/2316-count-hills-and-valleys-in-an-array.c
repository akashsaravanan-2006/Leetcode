int countHillValley(int* nums, int numsSize) {
    int i,j,k=0,c=0;
    for(i=0;i<numsSize-1;i++)
    if(nums[i]!=nums[i+1])
    nums[k++]=nums[i];
    nums[k++]=nums[numsSize-1];
    for(i=1;i<k-1;i++)
    if((nums[i-1]<nums[i] && nums[i] >nums[i+1] )||(nums[i-1]>nums[i] && nums[i] <nums[i+1] )  )
    c++;
return c;
}