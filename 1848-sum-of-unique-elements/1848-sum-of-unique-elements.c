int sumOfUnique(int* nums, int numsSize) {
    int i,j,f,c,k,s=0;
   for(i=0;i<numsSize;i++)
   {
    f=1;
    for(j=0;j<i;j++)
    if(nums[i]==nums[j])
    {
        f=0;
        break;
    }
    c=0;
    if(f==1)
    {
    for(k=i;k<numsSize;k++)
    if(nums[i]==nums[k])
    c++;
    }
    if(c==1)
    s=s+nums[i];
   }
return s;
}