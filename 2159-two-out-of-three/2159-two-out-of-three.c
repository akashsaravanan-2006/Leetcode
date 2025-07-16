/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoOutOfThree(int* nums1, int nums1Size, int* nums2, int nums2Size, int* nums3, int nums3Size, int* returnSize) {
    int i,j,m=0,ans[200000],k=0,f;
    int*ans1=(int*)malloc(200000*sizeof(int));
    for(i=0;i<nums1Size;i++)
    for(j=0;j<nums2Size;j++)
    if(nums1[i]==nums2[j])
    ans[m++]=nums1[i];
    for(i=0;i<nums2Size;i++)
    for(j=0;j<nums3Size;j++)
    if(nums2[i]==nums3[j])
    ans[m++]=nums2[i];
    for(i=0;i<nums3Size;i++)
    for(j=0;j<nums1Size;j++)
    if(nums3[i]==nums1[j])
    ans[m++]=nums3[i];
    for(i=0;i<m;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        if(ans[i]==ans[j])
        {
            f=0;
            break;
        }
        if(f==1)
        {
            ans1[k++]=ans[i];
        }
    }
    *returnSize=k;
    return ans1;

}