class Solution {
    public List<Integer> findMissingElements(int[] nums) {
    List<Integer>ans= new ArrayList<>();
    Set<Integer>s= new HashSet<>();
    Arrays.sort(nums);
    for(int k:nums)
    s.add(k);
    int a=nums[0];                  
    int n=nums[nums.length-1];    
    for(int i=a;i<=n;i++)
    if(!s.contains(i))
    ans.add(i);
    return ans;
    }
}
