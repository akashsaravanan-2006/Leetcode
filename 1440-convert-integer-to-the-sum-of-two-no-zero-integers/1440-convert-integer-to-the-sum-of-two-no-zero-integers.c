/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getNoZeroIntegers(int n, int* returnSize) {
    int i,m=0,r,m1,m0,f;
    int*ans=(int*)malloc(2000*sizeof(int));
    for(i=1;i<n;i++)
    if(i+(n-i)==n && i!=0 &&(n-i)!=0 && i%5!=0 && (n-i)%5!=0)
    {
        f=0;
        m0=i;
        m1=(n-i);
        while(m0!=0)
        {
            r=m0%10;
            if(r==0)
            {
            f=1;
            break;
            }
            m0=m0/10;
        }
        if(f==0)
        {
          while(m1!=0)
        {
            r=m1%10;
            if(r==0)
            {
            f=1;
            break;
            }
            m1=m1/10;
        }   
        }
        if(f==0)
        {        
        ans[m++]=i;
        ans[m++]=(n-i);
        break;
        }
    }
    *returnSize=m;
    return ans;
}