class Solution {
    public String reversePrefix(String s, int k) {
        char a[]=new char[k];
        String ans="";
        for(int i=(k-1);i>=0;i--)
        ans=ans+s.charAt(i);
        for(int i=k;i<s.length();i++)
        ans=ans+s.charAt(i);
        return ans;
    }
}