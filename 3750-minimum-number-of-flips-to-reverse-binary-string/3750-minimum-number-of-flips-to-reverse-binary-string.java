class Solution {
    public int minimumFlips(int n) {
        String b=Integer.toBinaryString(n);
        String n1=new StringBuilder(b).reverse().toString();
        int c=0;
        for (int i=0;i<b.length();i++) 
        if(b.charAt(i)!=n1.charAt(i)) 
        c++;
        return c;
    }
}
