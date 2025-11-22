class Solution {
    public String removeDuplicates(String s) {
        Stack<Character>st=new Stack<>();
        for (char c:s.toCharArray()) 
        {
            if(st.isEmpty()==false && st.peek() == c)
            st.pop();
            else
            st.push(c);
        }
        String ans="";
        for(Character k:st )
        ans=ans+k;
        return ans;    
        }
}