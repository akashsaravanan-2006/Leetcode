/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int*ans=(int*)malloc(numsSize*sizeof(int));
    int i,j;
    j=0;
    for(i=0;i<numsSize;i++)
    if(nums[i]%2==0)
    {
        ans[j]=nums[i];
        j=j+2;
    }
    j=1;
    for(i=0;i<numsSize;i++)
    if(nums[i]%2!=0)
    {
        ans[j]=nums[i];
        j=j+2;
    }
* returnSize=numsSize;
return ans;
    
}