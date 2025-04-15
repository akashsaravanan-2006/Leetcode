int sumOfSquares(int* nums, int numsSize) {
    int i,n,s;
    s=0;
    n=numsSize;
   for(i=1;i<=numsSize;i++)
    if(n%i==0)
     s=s+nums[i-1]*nums[i-1];
     return s;
}