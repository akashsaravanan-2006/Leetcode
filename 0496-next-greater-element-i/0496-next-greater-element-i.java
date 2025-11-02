class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int m=0;
        int ans[]=new int[nums1.length];
        for(int i=0;i<nums1.length;i++)
        for(int j=0;j<nums2.length;j++)
        if(nums1[i]==nums2[j])
        {
            if(j==nums2.length-1)
            ans[m++]=-1;
            else
            {
            int f=1;
            for(int k=j;k<nums2.length;k++)
            if(nums1[i]<nums2[k])
            {
            ans[m++]=nums2[k];
            f=0;
            break;
            }
            if(f==1)
            ans[m++]=-1;
            }
        }
        return ans;
    }
}