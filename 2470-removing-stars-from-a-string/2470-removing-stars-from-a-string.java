class Solution {
    public String removeStars(String s) {
       Stack<Character> st=new Stack<>();
       for(int i=0;i<s.length();i++)
       {
        char c=s.charAt(i);
        if(c!='*')
        st.push(c);
        else
        {
            if(st.isEmpty()!=true)
            st.pop();
        }
       }
       String a="";
       while(!(st.isEmpty()))
       {
       a=a+st.pop();
       }
       String b="";
       String ans="";
    char c[]=a.toCharArray();
    for(int i=c.length-1;i>=0;i--)
    ans=ans+c[i];
    return ans;
    }
}