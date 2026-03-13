class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
       
        Set<List<Integer>>ans=new HashSet<>();
        for(int i=0;i<nums.length;i++)
        {
            int j=i+1,k=nums.length-1;
            while(j<k)
            {
                int s=nums[i]+nums[j]+nums[k];
                if(s==0)
                {
                    List<Integer> a = new ArrayList<>();
                    a.add(nums[i]);
                    a.add(nums[j]);
                    a.add(nums[k]);
                    ans.add(a);
                    j++;
                    k--;
                }
                if(s<0)
                j++;
                else if(s>0)
                k--;
            }
        }
        
        return new ArrayList<>(ans);
    }
}