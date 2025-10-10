/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int i,j,n,m=0;
     int*ans=(int*)malloc(2000*sizeof(int));
    for(i=0;i<numsSize-1;i++)
    if(nums[i]==nums[i+1])
    {
    nums[i]=nums[i]*2;
    nums[i+1]=0;
    }
    for(i=0;i<numsSize;i++)
    if(nums[i]!=0)
    ans[m++]=nums[i];
    for(i=m;i<numsSize;i++)
    ans[m++]=0;
    *returnSize=m;
    return ans;
}