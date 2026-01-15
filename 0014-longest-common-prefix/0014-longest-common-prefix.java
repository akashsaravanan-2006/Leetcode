class Solution {
    public String longestCommonPrefix(String[] strs) {
        for(int i=0;i<strs.length;i++)
        for(int j=i+1;j<strs.length;j++)
        if(strs[i].length()>strs[j].length())
        {
            String c=strs[i];
            strs[i]=strs[j];
            strs[j]=c;
        }
        String x=strs[0];
        String ans="";
        char a[]=x.toCharArray();
        for(int i=0;i<a.length;i++)
        {
            int f=0;
            for(int j=0;j<strs.length;j++)
            if(a[i]!=strs[j].charAt(i))
            {
                f=1;
                break;
            }
            if(f==1)
            break;
            else
            ans=ans+a[i];
        }
        return ans;
    }
}