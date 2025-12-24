class Solution {
    public int longestOnes(int[] nums, int k) {
        int e=0,s=0,c=0,grt=0,x=1,a=k;
        while(e<nums.length)
        {
            if(nums[e]!=0)
            {
            e++;
            c++;
            }
            else if(nums[e]==0 && a!=0)
            {
            e++;
            a--;
            c++;
            }
            else if(nums[e]==0 && a==0)
            {
            if(grt<c)
            grt=c;
            c=0;
            e=x;
            x++;
            s++;
            a=k;
            }
        }
    if(grt==0 || grt<c)
    return c;
    return grt;
    }
}