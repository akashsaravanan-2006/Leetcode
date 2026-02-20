class Solution {
    public String mapWordWeights(String[] words, int[] weights) {
        String ans="";
       for(String k:words)
       {
        int s=0;
        for(int i=0;i<k.length();i++)
        {
            int x=(k.charAt(i)-' ')-65;
            s=s+weights[x];
        }
        System.out.println(s);
        int y=s%26;
        char z = (char)('z'-y);
        ans=ans+z;
       }
       return ans; 
    }
}