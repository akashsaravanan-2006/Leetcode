bool isPossibleToSplit(int* nums, int numsSize) {
    int i,j,k,c,f;
    for(i=0;i<numsSize;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        if(nums[i]==nums[j])
        {
            f=1;
            break;
        }
        c=0;
        if(f==0)
        {
            for(k=i;k<numsSize;k++)
            if(nums[i]==nums[k])
            c++;
            if(c>2)
            return false;
        }
    }
    return true;
}