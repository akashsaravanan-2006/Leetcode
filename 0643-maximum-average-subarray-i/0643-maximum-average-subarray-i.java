class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int e=0,sum=0,s=0;
        double grt;
        for(int i=0;i<k;i++)
        sum=sum+nums[i];
        grt=sum;
        sum=0;
        while(e<nums.length)
        {
            sum=sum+nums[e];
            e++;
            if((e-s)==k)
            {
                if(sum>grt)
                grt=sum;
                sum=sum-nums[s];
                s++;
            }

        }
        return (double)grt/k;
    }
}