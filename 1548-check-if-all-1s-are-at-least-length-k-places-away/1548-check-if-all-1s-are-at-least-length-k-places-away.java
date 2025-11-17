class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        int s=0,f=0;;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==1)
            {
            if(s<k && f==1)
            return false;
            f=1;
            s=0;
            }
            else
            s++;
        }
        return true;
    }
}