class Solution {
    public int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            int x=i,c=0;
            String y=""+Integer.toBinaryString(x);
            for(int j=0;j<y.length();j++)
            if(y.charAt(j)=='1')
            c++;
            if(c==2)
            ans++;
            else if(c%2!=0 && c>2)
            {
                int f=0;
                for(int k=3;k<=Math.sqrt(c);k++)
                if(c%k==0)
                {
                    f=1;
                    break;
                }
                if(f==0)
                ans++;
            }
        }
        return ans;
    }
}