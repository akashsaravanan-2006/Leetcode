class Solution {
    public int earliestTime(int[][] tasks) {
        int sml=100000;
        for(int i=0;i<tasks.length;i++)
        {
        int s=tasks[i][0];
        int s2=tasks[i][1];
        if((s+s2)<sml)
        sml=s+s2;
        }
        return sml;
    }
}