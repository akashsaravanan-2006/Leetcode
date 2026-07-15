class Solution {
    public boolean isMiddleElementUnique(int[] nums) {
        int m=nums.length/2;
        int n=nums[m];
        m=0;
        for(int i=0;i<nums.length;i++)
            if(n==nums[i])
                m++;
        if(m>1)
            return false;
        return true;
        
    }
}