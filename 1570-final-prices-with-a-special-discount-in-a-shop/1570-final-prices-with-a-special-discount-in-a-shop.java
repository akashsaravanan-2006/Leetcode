class Solution {
    public int[] finalPrices(int[] prices) {
        int a[]=new int[prices.length];
        int m=0;
        for(int i=0;i<prices.length;i++)
        {
        int f=0;
        for(int j=i+1;j<prices.length;j++)
        if(prices[i]>=prices[j])
        {
        f=1;
        a[m++]=prices[i]-prices[j];
        break;
        }
        if(f!=1)
        a[m++]=prices[i];
        }
        return a;
    }
}