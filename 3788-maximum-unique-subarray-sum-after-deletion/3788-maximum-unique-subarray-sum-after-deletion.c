int maxSum(int* nums, int numsSize) {
    int i,j,k,f,s,grt;
    k=0;
    for(i=0;i<numsSize;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        if(nums[i]==nums[j])
        {
            f=0;
            break;
        }
        if(f==1)
        {
            nums[k++]=nums[i];
        }
    }
    s=0;
    for(i=0;i<k;i++)
    if(nums[i]>0)
    s=s+nums[i];
    if(s!=0)
    return s;
    if(s==0)
      {
        grt=nums[0];
        for(i=0;i<k;i++)
        if(nums[i]>grt)
        grt=nums[i];
          return grt;
      }
      return 0;
    }