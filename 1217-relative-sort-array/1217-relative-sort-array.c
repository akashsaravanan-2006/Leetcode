/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int i,j,c,m=0,k,b[100000],n=0;
       int*a=(int*)malloc(2000*sizeof(int));
    for(i=0;i<arr2Size;i++)
    {
    c=0;
    for(j=0;j<arr1Size;j++)
    if(arr1[j]==arr2[i])
    c++;
    for(k=0;k<c;k++)
    a[m++]=arr2[i];
    }
    for(i=0;i<arr2Size;i++)
    for(j=0;j<arr1Size;j++)
    {
         if(arr1[j]==arr2[i])
         arr1[j]=-1;
    }
    
    
    for(i=0;i<arr1Size;i++)
    if(arr1[i]!=-1)
     b[n++]=arr1[i];
     for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
     if(b[i]>b[j])
     {
        c=b[i];
        b[i]=b[j];
        b[j]=c;
     }
     for(i=0;i<n;i++)
     a[m++]=b[i];
    *returnSize=m;
    return a;
}