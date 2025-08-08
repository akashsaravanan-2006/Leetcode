void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i,j,c;
for(i=0;i<nums2Size;i++)
{
nums1[m]=nums2[i];
m++;
}
for(i=0;i<nums1Size;i++)
for(j=i+1;j<nums1Size;j++)
if(nums1[i]>nums1[j])
{
    c=nums1[i];
    nums1[i]=nums1[j];
    nums1[j]=c;
}



    









}