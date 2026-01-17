class Solution {
    public int[] resultsArray(int[] nums, int k) {
        int grt=-1,m=0;
        int ans[]=new int[nums.length-k+1];
        if(k==1)
        {
        for(int x:nums)
        ans[m++]=x;
        return ans;
        }
        List<Integer>a=new ArrayList<>();
        for(int i=0;i<k;i++)
        {
        grt=Math.max(nums[i],grt);
        a.add(nums[i]);
        }
        int f=0;
        for(int i=1;i<a.size();i++)
        if(a.get(i)<=a.get(i-1) || a.get(i-1)+1!=a.get(i))
        {
            f=1;
            break;
        }
        if(f==1)
        ans[m++]=-1;
        else
        ans[m++]=grt;
        for(int i=k;i<nums.length;i++)
        {
            f=0;
            a.add(nums[i]);
            a.remove(0);
            for(int j=1;j<a.size();j++)
            if(a.get(j)<=a.get(j-1) || a.get(j-1)+1!=a.get(j))
            {
            f=1;
            break;
            }
            if(f==1)
            ans[m++]=-1;
            else
            {
            grt=-1;
            for(int l=0;l<a.size();l++)
            grt=Math.max(a.get(l),grt);
            ans[m++]=grt;
            }
        }
    return ans;

    }
}