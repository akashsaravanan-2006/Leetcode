class Solution {
    public int maxDepth(String s) {
       int max=0,curmax=0;
       for(int i=0;i<s.length();i++)
       {
            if(s.charAt(i)=='(')
                curmax++;
            else if(s.charAt(i)==')')
            {
                max=Math.max(max,curmax);
                curmax--;
            }
       }
       return max;
       
    }
}