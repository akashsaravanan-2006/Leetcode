class Solution {
    public int minBitFlips(int start, int goal) {
        String n1=Integer.toBinaryString(start);
        String n2=Integer.toBinaryString(goal);
        int x=Math.max(n1.length(), n2.length());
        for(int i=n1.length();i<x;i++)
        n1="0"+n1;
        for(int i=n2.length();i<x;i++)
        n2="0"+n2;
        int i=0,c=0;
        while(i<x) 
        {
            if(n1.charAt(i)!=n2.charAt(i))
            c++;
            i++;
        }

        return c;
    }
}