class Solution {
    public int numOfSubarrays(int[] arr, int k, int threshold) {
        int c=0,s=0;
    for(int i=0;i<k;i++)
    s=s+arr[i];
    if(s/k>=threshold)
    c++;
    for(int i=k;i<arr.length;i++)
    {
        s=s+arr[i];
        s=s-arr[i-k];
        if(s/k>=threshold)
        c++;
    }
    return c;
    }
}