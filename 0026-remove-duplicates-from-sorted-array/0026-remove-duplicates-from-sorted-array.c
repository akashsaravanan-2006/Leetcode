int removeDuplicates(int* nums, int numsSize) {
    int i,j,k,f;
    k=0;
    for(i=0;i<numsSize;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        if(nums[i]==nums[j])
        {
            f=1;
            break;
        }
        if(f==0)
        {
          nums[k]=nums[i];
          k++;
        }
    }
    return k;
}