class Solution {
    public int compress(char[] a) {
        String ans="";
        if(a.length==1)
        return 1;
        int c=1,i;
        for(i=0;i<a.length-1;i++)
        {    
                if(a[i]==a[i+1])
                c++;
                else
                {
                ans=ans+a[i];
                if(c>1)
                ans=ans+c;
                c=1;
                }
        }
         ans=ans+a[i];
         if(c>1)
          ans=ans+c;
        System.out.println(ans);
        for(i=0;i<ans.length();i++)
        a[i]=ans.charAt(i);

        return i;
    }
}