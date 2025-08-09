bool isMonotonic(int* nums, int numsSize) {
    int i;
    if(nums[0]<nums[numsSize-1])
    {
        for(i=0;i<numsSize-1;i++)
        if(nums[i]>nums[i+1])
        return false;
    }
    else
    {
       for(i=0;i<numsSize-1;i++)
        if(nums[i]<nums[i+1])
        return false; 
    }
    return true;
}