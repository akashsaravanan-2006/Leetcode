class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        int i,j,c1,m=0;
        String c;
        String ans[]=new String[names.length];
       for(i=0;i<heights.length;i++)
       for(j=i+1;j<heights.length;j++)
       if(heights[i]<heights[j])
       {
        c=names[i];
        names[i]=names[j];
        names[j]=c;
        c1=heights[i];
        heights[i]=heights[j];
        heights[j]=c1;
       } 
       for(String k : names)
       ans[m++]=k;
       return ans;
    }
}