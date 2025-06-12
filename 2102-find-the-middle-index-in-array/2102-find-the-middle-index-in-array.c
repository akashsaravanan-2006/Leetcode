int findMiddleIndex(int* nums, int numsSize) 
{
    if(numsSize==0)
    return -1;
    if(numsSize==1)
    return 0;
    int i,j,k,s1,s2;
    for(i=0;i<numsSize;i++)
    {
        s1=0;
        for(j=0;j<i;j++)
        {
            s1=s1+nums[j];
        }
        s2=0;
        for(k=i+1;k<numsSize;k++)
        {
            s2=s2+nums[k];
        }
        if(s1==s2)
        return i;

    }
    return -1;
}