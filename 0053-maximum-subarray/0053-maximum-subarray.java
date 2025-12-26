class Solution {
    public int maxSubArray(int[] nums) {
        int grt=nums[0],s=0;
        if(nums.length==1)
        return nums[0];
        
        for(int i=0;i<nums.length;i++)
        {
          s=s+nums[i];
          grt=Math.max(s,grt); 
          if(s<0)
          s=0;
        }
        return grt;
    }
}