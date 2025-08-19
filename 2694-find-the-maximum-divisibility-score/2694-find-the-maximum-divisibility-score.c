int maxDivScore(int* nums, int numsSize, int* divisors, int divisorsSize) {
    int i,j,c,grt=0,grti=divisors[0];
   for(i=0;i<divisorsSize;i++)
   {
    c=0;
   for(j=0;j<numsSize;j++)
   {
   if(nums[j]%divisors[i]==0)
   c++;
   }
   if(grt<c)
   {
   grt=c;
   grti=divisors[i];
   }
   else if(grt==c && grti>divisors[i])
   grti=divisors[i];
   }
   return grti;


}