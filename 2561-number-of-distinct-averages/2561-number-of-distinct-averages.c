int distinctAverages(int* nums, int numsSize) {
    int i,j,c,m,k,f;
   double ans[100];
   m=0;
   for(i=0;i<numsSize;i++)
   for(j=i+1;j<numsSize;j++)
   if(nums[i]>nums[j])
   {
    c=nums[i];
    nums[i]=nums[j];
    nums[j]=c;
   }
   j=numsSize-1;
   for(i=0;i<numsSize/2;i++)
   {
    ans[m++]=(nums[i]+nums[j])/2.0;
    j--;
   }
    k=0;
    for(i=0;i<m;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        if(ans[i]==ans[j])
        {
            f=1;
            break;
        }
        if(f==0)
        {
          ans[k]=ans[i];
          k++;
        }
    }
    return k;

}