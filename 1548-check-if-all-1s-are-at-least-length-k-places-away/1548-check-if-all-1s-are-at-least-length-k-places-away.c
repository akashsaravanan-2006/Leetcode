bool kLengthApart(int* nums, int numsSize, int k) {
    int i,f=0,c=0;
 for(i=0;i<numsSize;i++)
 {
    if(nums[i]==0)
    {
    if(f==1)
    c++;
    }
   else if(nums[i] == 1)
    {
    if(f==1 && c<k)
    return false;
     f=1;
     c=0;
    }
}
return true;   
}