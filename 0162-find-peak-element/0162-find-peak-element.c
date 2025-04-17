int findPeakElement(int* nums, int numsSize) {
    int i,grt,m;
  grt=nums[0];
  for(i=0;i<numsSize;i++)
  if(nums[i]>grt)
  {
    grt=nums[i];
    m=i;
  }  
  return m;
}