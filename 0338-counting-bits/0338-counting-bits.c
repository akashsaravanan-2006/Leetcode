/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
     int*ans=(int*)malloc(200000*sizeof(int));
    int i,m=0,k,c,r;
    for(i=0;i<=n;i++)
    {
        k=i;
        c=0;
        while(k!=0)
        {
            r=k%2;
            if(r==1)
            c++;
            k=k/2;
        }
        ans[m++]=c;
    }
    *returnSize=m;
    return ans;
}