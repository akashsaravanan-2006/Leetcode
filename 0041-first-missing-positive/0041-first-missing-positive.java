class Solution {
    public int firstMissingPositive(int[] nums) {
 int i,j,c,m;
 Arrays.sort(nums);
 m=1;
 for(i=0;i<nums.length;i++)
 {
    if(nums[i]>0 && nums[i]==m)
     m++;
    else if(nums[i]>m)
    return m;
 }
  return m; 
    }
}

 
