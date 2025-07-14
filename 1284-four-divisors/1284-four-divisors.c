int sumFourDivisors(int* nums, int numsSize) {
    int i,j,k,c,s1=0,s;
for(i=0;i<numsSize;i++)
{
  j=nums[i];
  c=0;
  s=0;
  for(k=1;k*k<=j;k++)
  {
    if(j%k==0)
    {
      if(k==j/k)
      {
        s=s+k;
        c++;
      }
      else
      {
        s=s+k + (j/k);
        c=c+2;
      }
    }
  }
  if(c==4)
    s1=s1+ s;
}
return s1;

}