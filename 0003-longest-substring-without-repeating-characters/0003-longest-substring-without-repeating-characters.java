class Solution {
    public int lengthOfLongestSubstring(String s) {
        int e=0,s1=0,grt=0;
        String ans="";
        if(s.length()==0)
        return 0;
        System.out.println(s.length());
        if(s.trim().length()==0)
        return 1;
        char a[]=s.toCharArray();
        while(e<a.length)
        {
            if(ans.contains(String.valueOf(a[e]))==false)
            {
            ans=ans+a[e];
            e++;
            }
            else
            {
                if(ans.length()>grt)
                grt=ans.length();
                ans="";
                s1++;
                e=s1;
            }

        }
        if(grt<ans.length())
        return ans.length();
        return grt;
    }
}