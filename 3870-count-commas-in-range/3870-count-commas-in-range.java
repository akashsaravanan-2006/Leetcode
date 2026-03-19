class Solution {
    public int countCommas(int n) {
        if(n<1000)
        return 0;
        else
        {
            int n1=Math.abs(n-1000);
            return n1+1;
        }
    }
}