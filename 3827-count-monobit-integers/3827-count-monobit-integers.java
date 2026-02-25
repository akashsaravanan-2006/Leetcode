class Solution {
    public int countMonobit(int n) {
        if(n==1)
        return 2;
        else if(n==0)
        return 1;
        int ans=2;
        if(n>1)
        {
        for(int i=2;i<=n;i++)
        {
            int k=i;
            int c=0,c1=0;
            while(k>0)
            {
                if(k%2==0)
                c++;
                else
                c1++;
                k=k/2;
            }
            if((c==0 && c1!=0)|| (c1==0 && c!=0))
            ans++;
        }
        }
        return ans;
    }
}