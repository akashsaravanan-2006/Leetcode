/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int i,j,c=0,m=0;
    int*ans=(int*)malloc(2000*sizeof(int));
    for(i=0;i<nums1Size;i++)
    for(j=0;j<nums2Size;j++)
    if(nums1[i]==nums2[j])
    {
    c++;
    break;
    }
    ans[m++]=c;
    c=0;
    for(i=0;i<nums2Size;i++)
    for(j=0;j<nums1Size;j++)
    if(nums2[i]==nums1[j])
    {
    c++;
    break;
    }
    ans[m++]=c;
    *returnSize=m;
    return ans;

}