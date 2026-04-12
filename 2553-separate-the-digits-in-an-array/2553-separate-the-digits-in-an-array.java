class Solution {
    public int[] separateDigits(int[] nums) {
        String a="";
        for(int k:nums)
        a=a+k;
        int ans[]=new int[a.length()];
        int m=0;
        for(int i=0;i<a.length();i++)
        ans[m++]=a.charAt(i)-'0';
        return ans;


    }
}