double minimumAverage(int* nums, int numsSize) {
    int i,j,c,m;
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
   for(i=0;i<m;i++)
   for(j=i+1;j<m;j++)
   if(ans[i]>ans[j])
   {
    c=ans[i];
    ans[i]=ans[j];
    ans[j]=c;
   }
   return ans[0];
}