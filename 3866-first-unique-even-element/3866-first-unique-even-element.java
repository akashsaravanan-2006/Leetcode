class Solution {
    public int firstUniqueEven(int[] nums) {
        for(int i=0;i<nums.length;i++)
        {
            int f=0;
            if(nums[i]%2==0)
            {
            for(int j=0;j<i;j++)
            if(nums[i]==nums[j])
            {
                f=1;
                break;
            }
            int c=0;
            if(f==0)
            {
                for(int k=i;k<nums.length;k++)
                if(nums[i]==nums[k])
                c++;
                if(c==1)
                return nums[i];

            }
            }
        }
        return -1;
    }

}