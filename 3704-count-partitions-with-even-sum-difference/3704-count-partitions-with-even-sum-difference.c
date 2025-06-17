int countPartitions(int* nums, int numsSize) {
    int i,j,c,s,s1,k,a;
    c=0;
  for(i=0;i<numsSize-1;i++)
  {
    s=0;
    s1=0;
    for(j=i+1;j<numsSize;j++)
    s=s+nums[j];
    for(k=0;k<=i;k++)
    s1=s1+nums[k];
    a=s1-s;
    if(a%2==0)
    c++;
  }
  return c;
}