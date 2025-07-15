/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
 int ans[numsSize],ans1[numsSize],i,j,k1,f,grt,n=0,m=0,c,c1;
  int*a=(int*)malloc(2000*sizeof(int));
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
        for(k1=i;k1<numsSize;k1++)
        if(nums[i]==nums[k1])
        c++;
        ans[m++]=c;
        ans1[n++]=nums[i];

    }
} 
for(i=0;i<m;i++)
for(j=i+1;j<m;j++)
if(ans[i]<ans[j])
{
    c=ans[i];
    ans[i]=ans[j];
    ans[j]=c;
    c1=ans1[i];
    ans1[i]=ans1[j];
    ans1[j]=c1;
}
m=0;
for(i=0;i<k;i++)
a[m++]=ans1[i];
*returnSize=m;
return a;
}