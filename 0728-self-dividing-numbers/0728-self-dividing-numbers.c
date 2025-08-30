int* selfDividingNumbers(int left, int right, int* returnSize) {
    int r,f;
    long i,m,k;
    k=0;
   int* ans =(int*)malloc((right - left+1)*sizeof(int));
  for(i=left;i<=right;i++)
  {
  m=i;
  f=0;
  while(i!=0)
  {
    r=i%10;
    if(r==0 || m%r!=0)
    {
    f=1;
    break;
    }
    i=i/10;
  }  
  if(f==0)
  {
    ans[k]=m;
    k++;
  }
  i=m;
  }
 *returnSize=k;
 return ans;                                
}
