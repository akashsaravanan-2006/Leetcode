class Solution {
    public int hIndex(int[] citations) {
         int i,h;
         int citationsSize=citations.length;
    Arrays.sort(citations);
    for(i=0;i<citationsSize;i++)
    {
        h=citationsSize-i;
        if(citations[i]>=h)
        return h;
    }
    return 0;
    }
}