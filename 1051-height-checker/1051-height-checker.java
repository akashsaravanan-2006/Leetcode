class Solution {
    public int heightChecker(int[] heights) {
        int a[]=new int[heights.length];
        int m=0,c=0;
        for(int k:heights)
        a[m++]=k;
        Arrays.sort(a);
        for(int i=0;i<a.length;i++)
        if(a[i]!=heights[i])
        c++;
        return c;
    }
}