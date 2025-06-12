int mostFrequentEven(int* nums, int numsSize) {
    int i,j,m,x,y,f,c,grt,k;
    c=0;
    grt=0;
   int a[numsSize];
   k=0;
   for(i=0;i<numsSize;i++) 
   if(nums[i]%2==0)
   {
    a[k]=nums[i];
    k++;
   }
   for(i=0;i<k;i++)
  for(j=i+1;j<k;j++)
  if(a[i]>a[j])
  {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
  }

   for(i=0;i<k;i++)
   {
    f=1;
    for(j=0;j<i;j++)
    if(a[i]==a[j])
    {
        f=0;
        break;
    }
    c=0;
    if(f==1)
    {
        for(m=i;m<k;m++)
        if(a[i]==a[m])
        {
        c++;
        x=a[i];
        }
        printf("%d",c);
        if(grt<c)
        {
            
            grt=c;
            y=x;
        }
    }
   }
    if(k==0)
    return -1;
   return y;
}