class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        Map<Integer,Integer> map = new HashMap<>();
        for(Integer k :nums)
        map.merge(k,1,Integer::sum);
        for(Map.Entry<Integer,Integer> e : map.entrySet())
        if(e.getValue() == 2)
        ans.add(e.getKey());
        return ans;
    }
}