void moveZeroes(int* nums, int numsSize) {
    int i,n,m;
    n=0;
    for(i=0;i<numsSize;i++)
    if(nums[i]!=0)
    {
        nums[n]=nums[i];
        n++;
    }
    m=n;
    for(i=n;i<numsSize;i++)
    {
        nums[m]=0;
        m++;

    }
}