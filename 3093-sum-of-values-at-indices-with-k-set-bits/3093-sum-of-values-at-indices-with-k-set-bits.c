int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
   int i,m=0,c,r,x;
     for(i=0;i<numsSize;i++)
    {
        x=i;
        c=0;
        while(x!=0)
        {
            r=x%2;
            if(r==1)
            c++;
            x=x/2;
        }
        if(c==k)
        m=m+nums[i];
    }
    return m; 
}