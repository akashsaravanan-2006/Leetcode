class Solution {
    public int maxOperations(int[] nums, int k) {
      int i=0,j=nums.length-1,c=0,s;
      Arrays.sort(nums);
      while(i<j)
      {
        s=nums[j]+nums[i];
        if(s==k)
        {
        c++;
        i++;
        j--;
        }
        else if(s>k)
        j--;
        else
        i++;
      } 
      return c; 
    }
}