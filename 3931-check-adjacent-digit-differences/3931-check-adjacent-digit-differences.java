class Solution {
    public boolean isAdjacentDiffAtMostTwo(String s) {
        int c=Math.abs(s.charAt(0)-s.charAt(1));
        if(c>2)
        return false;
        for(int i=1;i<s.length();i++)
        {
            c=Math.abs(s.charAt(i)-s.charAt(i-1));
            if(c>2)
            return false;
        }
        return true;
    }
}