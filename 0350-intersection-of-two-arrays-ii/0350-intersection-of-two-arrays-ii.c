/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
     int*ans=(int*)malloc(1000*sizeof(int));
     int i,j,k,f;
     k=0;
    for(i=0;i<nums2Size;i++)
    for(j=0;j<nums1Size;j++)
    if(nums2[i]==nums1[j])
    {
    ans[k++]=nums2[i];
    nums1[j]=-1;
    break;
    }
    *returnSize=k;
    return ans;
}