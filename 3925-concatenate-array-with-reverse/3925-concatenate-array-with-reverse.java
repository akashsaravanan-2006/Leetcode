class Solution {
    public int[] concatWithReverse(int[] nums) {
        int ans[]=new int[nums.length*2];
        int m=0;
        for(int k:nums)
        ans[m++]=k;
        for(int i=nums.length-1;i>=0;i--)
        ans[m++]=nums[i];
        return ans;

        
    }
}