class Solution {
    public int numUniqueEmails(String[] emails) {
        Set<String> ans=new HashSet<>();
        for(String k:emails){
            String x=k,a1="";
            int n2=x.indexOf('@');
            int n1=x.indexOf('+');
            if(n1==-1||n1>n2)n1=n2;
            for(int i=0;i<n1;i++){
                if(x.charAt(i)!='.')a1=a1+x.charAt(i);
            }
            for(int i=n2;i<x.length();i++)a1=a1+x.charAt(i);
            ans.add(a1);
        }
        return ans.size();
    }
}