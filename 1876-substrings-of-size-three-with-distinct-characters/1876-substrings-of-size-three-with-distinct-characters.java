class Solution {
    public int countGoodSubstrings(String s) {
        int en=0,st=0,c=0;
        String s1="";
        char a[]=s.toCharArray();
        while(en<a.length)
        {
            s1=s1+a[en];
            en++;
            if((en-st)==3)
            {
               char b[]=s1.toCharArray();
               if(b[0]!=b[1] && b[0]!=b[2] && b[1]!=b[2] && b[2]!=b[0])
               c++;
               st++;
               s1="";
               for(int i=1;i<=2;i++)
               s1=s1+b[i];
            }

        }
    return c;
    }
}