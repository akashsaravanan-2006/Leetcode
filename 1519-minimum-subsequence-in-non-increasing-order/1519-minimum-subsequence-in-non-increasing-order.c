/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minSubsequence(int* nums, int numsSize, int* returnSize) {
     int*ans=(int*)malloc(2000*sizeof(int));
     int i,j,m=0,s=0,s1=0,c;
     for(i=0;i<numsSize;i++)
     for(j=i+1;j<numsSize;j++)
     if(nums[i]<nums[j])
     {
        c=nums[i];
        nums[i]=nums[j];
        nums[j]=c;
     }
     for(i=0;i<numsSize;i++)
     {
     s1=s1+nums[i];
     s=0;
     for(j=i+1;j<numsSize;j++)
     s=s+nums[j];
     if(s<s1)
     {
        ans[m++]=nums[i];
        *returnSize=m;
        return ans;
     }
     ans[m++]=nums[i];
    }
     *returnSize=m;
        return ans; 
}