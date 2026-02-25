class Solution {
    public int[] sortByBits(int[] arr) {
       Arrays.sort(arr);
       for(int i=0;i<arr.length;i++)
       for(int j=i+1;j<arr.length;j++)
       {
        int c1=Integer.bitCount(arr[i]);
        int c2=Integer.bitCount(arr[j]);
     if (c1>c2 ||(c1==c2 && arr[i]>arr[j])) 
       {
        int c=arr[i];
        arr[i]=arr[j];
        arr[j]=c;
       } 
       }
       int ans[]=new int[arr.length];
      int  m=0; 
       for(int k:arr) 
       ans[m++]=k; 
       return ans;
    }
}