/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int i,j,k,s;
   int*ans=(int*)malloc(numsSize*sizeof(int));
    int ans1[numsSize];
    int ans2[numsSize];
     k=0;
    for(i=0;i<numsSize;i++)
    {
        s=0;
    for(j=i-1;j>=0;j--)
    s=s+nums[j];
    ans1[k]=s;
    k++;
    }
    k=0;
    for(i=0;i<numsSize;i++)
    {
        s=0;
    for(j=i+1;j<numsSize;j++)
    s=s+nums[j];
    ans2[k]=s;
    k++;
    }
    k=0;
  for(i=0;i<numsSize;i++)
  {
  ans[k]=abs(ans1[i]-ans2[i]);
  k++;
}
*returnSize=k;
return ans;

}