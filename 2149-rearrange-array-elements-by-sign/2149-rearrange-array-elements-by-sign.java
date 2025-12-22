class Solution {
    public int[] rearrangeArray(int[] nums) {
        int a[]=new int[nums.length/2];
        int b[]=new int[nums.length/2];
        int ans[]=new int[nums.length];
        int m=0,m1=0;
        for(int k:nums)
        {
            if(k>=0)
            a[m++]=k;
            else
            b[m1++]=k;
        }
    m=0;
    for(int k:a)
    {
    ans[m]=k;
    m=m+2;
    }
    m=1;
    for(int k:b)
    {
    ans[m]=k;
    m=m+2;
    }
    return ans;
    }
}