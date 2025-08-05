bool checkPrimeFrequency(int* nums, int numsSize) {
    int i,j,k,f,c;
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
      if(c==2)
      return true;
      else if(c%2!=0 && c!=1)
      {
        f=0;
        for(k=3;k<=c/2;k=k+2)
        if(c%k==0)
        {
            f=1;
            break;
        }
        if(f==0)
        return true;
      }
    }
   } 
    return false;
}