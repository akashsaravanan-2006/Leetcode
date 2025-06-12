class Solution {
    public int maxIceCream(int[] costs, int coins) {
            int i,j,s,c;
   Arrays.sort(costs);
   int costsSize=costs.length;
    c=0;
    s=0;
    for(i=0;i<costsSize;i++)
    {
        s=s+costs[i];
        c++;
        if(s==coins)
        return c;
        if(costs[i]>coins)
        return 0;
        if(s>coins)
        return c-1;
    }
    return costsSize;
}
}