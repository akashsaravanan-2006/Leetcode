class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int a=0,grt=Integer.MAX_VALUE,c=0,s=0;
        for(int i=a;i<nums.length;i++)
        {
            s=s+nums[i];
            c++;
            if(s>=target)
            {
                if(grt>c)
                grt=c;
                c=0;
                s=0;
                i=a++;
            }
        }
        if(grt==2147483647)
        return 0;
        return grt;
    }
}