class Solution {
    public boolean backspaceCompare(String s, String t) {
      Stack<Character> stk1=new Stack<>();
      Stack<Character> stk2=new Stack<>();
      for(int i=0;i<s.length();i++)
      {
        char c=s.charAt(i);
        if(c!='#')
        stk1.push(c);
        else
        {
            if(stk1.isEmpty()!=true)
            stk1.pop();
        }
      }  
      for(int i=0;i<t.length();i++)
      {
        char c=t.charAt(i);
        if(c!='#')
        stk2.push(c);
        else
        {
            if(stk2.isEmpty()!=true)
            stk2.pop();
        }
      }
      return stk1.equals(stk2);
    }
}