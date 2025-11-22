class Solution {
    public int minimumOperations(int[] nums) {
        int c=0;
        for(int k:nums)
        if(k%3!=0)
        c++;
        return c;
    }
}