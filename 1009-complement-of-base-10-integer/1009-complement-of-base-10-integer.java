class Solution {
    public int bitwiseComplement(int n) {
       String x = Integer.toBinaryString(n);
       char a[]=x.toCharArray();
       for(int i=0;i<a.length;i++)
       {
        if(a[i]=='1')
        a[i]='0';
        else
        a[i]='1';
       }
      x="";
      for(char k:a)
      x=x+k;
      return Integer.parseInt(x,2);
    }
}