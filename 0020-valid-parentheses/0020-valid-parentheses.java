class Solution {
    public boolean isValid(String s) {
        Stack<Character>stk=new Stack<>();
        char a[]=s.toCharArray();
        for(int i=0;i<a.length;i++)
        {
            if(a[i]=='[' || a[i]=='{' || a[i]=='(')
            stk.push(a[i]);
            else
            {
                if(stk.isEmpty()==false)
                {
                    if(a[i]==']' && stk.peek()=='[')
                    stk.pop();
                    else if(a[i]==')' && stk.peek()=='(')
                    stk.pop();
                    else if(a[i]=='}' && stk.peek()=='{')
                    stk.pop();
                    else 
                    return false;
                }
                else
                return false;
            }
        }
        System.out.println(stk);
        if(stk.isEmpty()==true)
        return true;
        return false;
    }
}