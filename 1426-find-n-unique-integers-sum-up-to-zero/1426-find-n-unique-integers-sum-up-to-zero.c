/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int i,m=0;
    int*a=(int*)malloc(1000*sizeof(int));
    if(n%2==0)
    {
   for(i=0;i<n/2;i++)
   {
    a[m++]=(i+1);
    a[m++]=-(i+1);
   }
   *returnSize=m;
   return a;
    }
    else
    {
     for(i=0;i<n/2;i++)
     {
    a[m++]=(i+1);
    a[m++]=-(i+1);
     }   
    }
    a[m++]=0;
    *returnSize=m;
    return a;
}