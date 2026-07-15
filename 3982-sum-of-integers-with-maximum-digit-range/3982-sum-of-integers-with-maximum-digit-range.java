class Solution {
    public int maxDigitRange(int[] nums) {
        int grt=0,sml=9;
        int a[]=new int[nums.length];
        for(int i=0;i<nums.length;i++)
            {
                int n=nums[i];
                while(n!=0)
                    {
                        int r=n%10;
                        if(grt<r)
                            grt=r;
                        if(sml>r)
                            sml=r;
                        n=n/10;
                    }
               a[i]=grt-sml;
                grt=0;
                sml=9;
            }
        grt=0;
        int ans=0;
        for(int i=0;i<a.length;i++)
           if(grt<a[i])
               grt=a[i];
        for(int i=0;i<a.length;i++)
            if(a[i]==grt)
                ans=ans+nums[i];
        return ans;
    }
}