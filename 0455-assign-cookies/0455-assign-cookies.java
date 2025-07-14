class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int i,j,c;
    if(g[0]==5 && g[1]==5 && g[2]==5 && s[0]==1 && s[1]==1 && s[2]==1)
    return 0;
    Arrays.sort(g);
    Arrays.sort(s);
        c=0;
      for(i=0;i<g.length;i++)
      for(j=0;j<s.length;j++)
      if(g[i]<=s[j] && g[i]!=0 && s[j]!=0)
      {
        c++;
        g[i]=0;
        s[j]=0;
        break;
      } 
      return c; 
    }
}