int diagonalPrime(int** nums, int numsSize, int* numsColSize) {
    int i,j,ans[10000],m=0,k,f,grt=0,n;
    for(i=0;i<numsSize;i++)
    ans[m++]=nums[i][i];
    j = numsSize-1;
    for(i=0;i<numsSize;i++)
    {
    ans[m++]=nums[i][j];
    j--;
    }
    k=0;
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
       if(ans[i] > 1 && (ans[i] == 2 || ans[i]%2 != 0))
       ans[k++] = ans[i];
        }
    }
    for(i=0;i<k;i++)
    {
        n=ans[i]/2;
        f=0;
       for(j=3;j<n;j=j+2)
       {
       if(ans[i]%j==0)
       {
       f=1;
       break;
       }
       }
       if(f==0)
       {
       if(grt < ans[i])
       grt=ans[i];
       }
    }
    return grt;
}