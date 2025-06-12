int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    int*ans=(int*)malloc(1000*sizeof(int));
    int i,m,s,j,c;
    m=0;
    for(i=1;i<=numOnes ;i++)
    {
    ans[m]=1;
    m++;
    }
    for(i=1;i<=numNegOnes ;i++)
    {
    ans[m]=-1;
    m++;
    }
     for(i=1;i<=numZeros ;i++)
    {
    ans[m]=0;
    m++;
    }
    for(i=0;i<m;i++)
    for(j=i+1;j<m;j++)
    if(ans[i]<ans[j])
    {
        c=ans[i];
        ans[i]=ans[j];
        ans[j]=c;
    }
    for(i=0;i<m;i++)
    printf("%d",ans[i]);
    s=0;
  for(i=0;i<k;i++)
  s=s+ans[i];
    return s;
}