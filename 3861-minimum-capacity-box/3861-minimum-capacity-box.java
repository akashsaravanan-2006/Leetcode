class Solution {
    public int minimumIndex(int[] cap, int item) {
        int grti=-1,grt=Integer.MAX_VALUE;
        for(int i=0;i<cap.length;i++)
        {
            if(cap[i]==item)
            return i;
            else if(cap[i]>=item && grt>cap[i])
            {
                grt=cap[i];
                grti=i;
            }
        }
        return grti;
    }
}