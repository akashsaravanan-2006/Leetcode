class Solution {
    public int maxDepth(String s) {
       Stack<Character> str=new Stack<>();
       int max=0;
       for(int i=0;i<s.length();i++)
       {
            if(s.charAt(i)=='(')
                str.push(s.charAt(i));
            else if(s.charAt(i)==')')
            {
                if(!str.isEmpty())
                {
                    max=Math.max(max,str.size());
                    str.pop();
                }
            }
       }
       return max;
       
    }
}