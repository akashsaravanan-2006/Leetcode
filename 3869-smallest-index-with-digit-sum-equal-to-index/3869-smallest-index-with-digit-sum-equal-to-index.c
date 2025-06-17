int smallestIndex(int* nums, int numsSize) {
    int i,s,r,n;
    for(i=0;i<numsSize;i++)
    {
         if(nums[i]==i && nums[i]<=9)
        {
            return i;
        }
         else
        {
            n=nums[i];
            s=0;
            while(n!=0)
            {
                r=n%10;
                s=s+r;
                n=n/10;
            }
            printf("%d",s);
            if(s==i)
            return i;
        }
       
    }
return -1;
}