class Solution {
    public int subarraySum(int[] nums) {
        int ans=0;
        for(int i=0;i<nums.length;i++)
        {
            int s=0;
            int a=Math.max(0,i-nums[i]);
            for(int j=a;j<=i;j++)
            s=s+nums[j];
            System.out.println(s);
            ans=ans+s;

        }
        return ans;
    }
}