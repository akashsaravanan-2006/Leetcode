class Solution {
    public int minMaxGame(int[] nums) {
        if(nums.length == 1) 
        return nums[0];
            int n=nums.length;
            int newNums[]=new int[n/2];
            for(int i=0;i<n/2;i++)
            if(i%2==0)
            newNums[i] = Math.min(nums[2 * i], nums[2 * i + 1]);
            else if(i % 2 == 1)
            newNums[i] =Math.max(nums[2 * i], nums[2 * i + 1]);
            else
        return nums[0];

        return minMaxGame(newNums);
        
    }
}