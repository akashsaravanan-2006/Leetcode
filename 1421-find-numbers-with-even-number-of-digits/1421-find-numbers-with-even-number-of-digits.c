int findNumbers(int* nums, int numsSize) {
    int i,c,s,r;
    s=0;
    for(i=0;i<numsSize;i++)
    {
        c=0;
        while(nums[i]!=0)
        {
            r=nums[i]%10;
            c++;
            nums[i]=nums[i]/10;
        }
        if(c%2==0)
        s=s+1;
    }
    return s;
}