class Solution {
    public int minimumFlips(int n) {
        String b = Integer.toBinaryString(n);
        char a[]=new char[b.length()];
        int m=b.length()-1;

        for(int i=0;i<b.length();i++)
        a[m--]=b.charAt(i);
        String n1="";
        for(char k:a)
        n1=n1+k;
        for(char k:a)
        System.out.print(k);

        char[] n2 = b.toCharArray();
        int c = 0;

        if (b.equals(n1))
        return c;
        else 
        {
        int i=0;
        while (i<n2.length) 
        {
        if(n2[i]!=a[i])
        c++;
        i++;
        }
        }
        return c;
    }
}
