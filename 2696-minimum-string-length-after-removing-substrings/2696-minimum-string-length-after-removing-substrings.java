class Solution {
    public int minLength(String s) {
        char a[]=s.toCharArray();
       Stack<Character>stk=new Stack<>();
       for(int i=0;i<a.length;i++)
       {
       if((stk.isEmpty()==false && a[i]=='B' && stk.peek()=='A')||(stk.isEmpty()==false && a[i]=='D' && stk.peek()=='C'))
       stk.pop();
       else
       stk.push(a[i]);
       }
       return stk.size();
    }
}