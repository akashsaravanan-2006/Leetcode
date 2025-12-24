class Solution {
    public int minimumBoxes(int[] apple, int[] capacity) {
        int s=0,m=0,c=0;
        for(int k:apple)
        s=s+k;
        Arrays.sort(capacity);
        for(int i=capacity.length-1;i>=0;i--)
        {
            m=m+capacity[i];
            c++;
            if(m>=s)
            break;
        }
      return c;
    }
}