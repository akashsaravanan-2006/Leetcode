class Solution {
    public int[] getConcatenation(int[] nums) {
        int ans[]=new int[nums.length*2];
        int m=0;
        for(int k:nums)
        ans[m++]=k;
        for(int k:nums)
        ans[m++]=k;

        return ans;
    }
}