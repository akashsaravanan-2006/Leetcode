class Solution {
    public int maxVowels(String s, int k) {
        char a[]=s.toCharArray();
        int c=0;
        for(int i=0;i<k;i++)
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        c++;
        int grt=c;
        for(int i=k;i<a.length;i++)
        {
           if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
           c++;
           int x=i-k;
           if(a[x]=='a'||a[x]=='e'||a[x]=='i'||a[x]=='o'||a[x]=='u')
           c--;
           grt=Math.max(c,grt);


        }
        return grt;
    }
}