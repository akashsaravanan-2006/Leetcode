class Solution {
    public int countDigitOccurrences(int[] nums, int digit) {
        int ans=0;
        for(int k:nums)
        {
            int n=k;
            while(n!=0)
            {
                int r=n%10;
                if(r==digit)
                ans++;
                n=n/10;
            }
        }
        return ans;
    }
}