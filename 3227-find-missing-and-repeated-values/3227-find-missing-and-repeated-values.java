class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
       Set<Integer>a=new TreeSet<>();
       int a1[]=new int[grid.length*grid.length];
       int ans[]=new int[2];
       int m=0;
       for(int i=0;i<grid.length;i++)
       for(int j=0;j<grid[i].length;j++)
       a1[m++]=grid[i][j];
       int x=m;
       Arrays.sort(a1);
       m=0;
       for(int i=0;i<a1.length-1;i++)
       if(a1[i]==a1[i+1])
       ans[m++]=a1[i];
       for(int k:a1)
       a.add(k);
       int s=0;
       int n=(x*(x+1))/2;
       for(Integer k:a)
       s=s+k;
       ans[m++]=(n-s);
       return ans;
    }
}