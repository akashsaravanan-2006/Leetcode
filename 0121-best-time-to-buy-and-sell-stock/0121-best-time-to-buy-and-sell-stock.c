int maxProfit(int* prices, int pricesSize) {
    int k,small,a ,i;
    k=0;
    small=prices[0];
 for(i=0;i<pricesSize;i++)
 {
    if(prices[i]<small)
    {
    small=prices[i];
    }
    a=prices[i]-small;
    if(a>k)
    k=a;
 }
return k;
}