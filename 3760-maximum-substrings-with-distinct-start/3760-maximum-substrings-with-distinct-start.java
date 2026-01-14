class Solution {
    public int maxDistinct(String s) {
        Set<Character>a=new HashSet<>();
        for(int i=0;i<s.length();i++)
        {
            char x=s.charAt(i);
            a.add(x);
        }
        return a.size();
    }
}