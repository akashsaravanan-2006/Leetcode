class Solution {
    public int sumDivisibleByK(int[] nums, int k) {
        int b=0;
        for(int i=0;i<nums.length;i++)
        {
            int f=1;
            for(int j=0;j<i;j++)
            if(nums[i]==nums[j])
            {
                f=0;
                break;
            }
            int c=0,a=0;
            if(f==1)
            {
                for(int l=i;l<nums.length;l++)
                if(nums[i]==nums[l])
                c++;
                if(c%k==0)
                {
                 for(int m=1;m<=c;m++)
                 a=a+nums[i];
                 b=b+a;
                }
            }
        }
        return b;
    }
}