int maxFrequencyElements(int* nums, int numsSize) 
{
    int a[100],k,i,j,f,c,m,x,s;
    m=0;
   for(i=0;i<numsSize;i++)
   {
    f=0;
    for(j=0;j<i;j++)
    if(nums[i]==nums[j])
    {
        f=1;
        break;
    }
    if(f==0)
    {
        c=0;
        for(k=i;k<numsSize;k++)
        if(nums[k]==nums[i])
        c++;
        a[m]=c;
        m++;
    }
   } 
   for(i=0;i<m;i++)
   for(j=i+1;j<m;j++)
   if(a[i]<a[j])
   {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
   }
x=a[0];
s=a[0];
for(i=1;i<m;i++)
if(x==a[i])
s=s+a[i];
return s;
}