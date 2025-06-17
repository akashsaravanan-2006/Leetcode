class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
      Set<Integer>a=new TreeSet<>();
      List<Integer>b=new ArrayList<>();
      for(int k : nums)
      a.add(k);
      for(int i=1;i<=nums.length;i++)
      if(a.contains(i) == false)
       b.add(i);
       return b;
    }
}