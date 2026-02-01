class Solution {
    public int getLeastFrequentDigit(int n) {
        int grt= Integer.MAX_VALUE ,digit=Integer.MAX_VALUE,x1=Integer.MAX_VALUE;
        String x=""+n;
        for(int i=0;i<x.length();i++)
        {
            int f=0;
            for(int j=0;j<i;j++)
            if(x.charAt(i)==x.charAt(j))
            {
                f=1;
                break;
            }
            int c=0;
            if(f==0)
            {
                for(int k=i;k<x.length();k++)
                if(x.charAt(i)==x.charAt(k))
                c++;
                if(c<=grt)
                {
                    grt=c;
                    int y=Integer.valueOf(x.charAt(i))-48;
                    if(c<x1)
                    digit=y;
                    else
                    digit=Math.min(y,digit);
                    x1=c;
                }
            }
        }
        return digit;
        
    }
}