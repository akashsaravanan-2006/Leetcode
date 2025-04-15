double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
   int i,j,m,c,d;
    d=nums1Size+nums2Size;
    double*ans=(double*)malloc(d*sizeof(double));
    for(i=0;i<nums1Size;i++)
    ans[i]=nums1[i];
    m=i;
    for(i=0;i<nums2Size;i++)
    {
    ans[m]=nums2[i];
    m++;
    }
    for(i=0;i<m;i++)
    for(j=i+1;j<m;j++)
    if(ans[i]>ans[j])
    {
        c=ans[i];
        ans[i]=ans[j];
        ans[j]=c;
    }
    if(m%2!=0)
    return ans[m/2];
    c=ans[m/2]+ans[(m/2)-1];
    return c/2.0;
    
}