class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        List<Integer>a=new ArrayList<>();
        int m=0;
        int ans[]=new int[nums.length];
       for(int i=0;i<index.length;i++)
       a.add(index[i],nums[i]);
       for(Integer k:a)
       ans[m++]=k;
       return ans;
    }
}