class Solution {
    public int maximumGap(int[] nums) {
         int i,j,grt,c;
        int numsSize=nums.length;
    if(numsSize<2)
    return 0;
    grt=0;
    Arrays.sort(nums);
    for(i=0;i<numsSize-1;i++)
    {
        c=Math.abs(nums[i]-nums[i+1]);
        if(c>grt)
        grt=c;
    }
    return grt;
}
    }