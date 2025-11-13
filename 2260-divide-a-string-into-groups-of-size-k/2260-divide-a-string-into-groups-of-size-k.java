class Solution {
    public String[] divideString(String s, int k, char fill) {
        char a[]=s.toCharArray();
        String a1[]=new String[10000];
        String res[];
        int c=-1,m=0;
        String x="";
        for(int i=0;i<a.length;i++)
        {
            c++;
            if(c==k)
            {
                a1[m++]=x;
                c=0;
                x="";
            }
            x=x+a[i];
            a[i]='0';
        }
        if(x.length()==k)
        a1[m++]=x;
        else
        {
        int n=k-x.length();
        for(int i=0;i<n;i++)
        x=x+fill;
        a1[m++]=x;
        }
        res = Arrays.copyOf(a1, m);
        return res;
    }
}