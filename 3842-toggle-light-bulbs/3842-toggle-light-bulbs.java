class Solution {
    public List<Integer> toggleLightBulbs(List<Integer> bulbs) {
        List<Integer>ans=new ArrayList<>();
        for(int i=0;i<bulbs.size();i++)
        {
            int f=0;
            for(int j=0;j<i;j++)
            if(bulbs.get(i)==bulbs.get(j))
            {
                f=1;
                break;
            }
            int c=0;
            if(f==0)
            {
                for(int k=i;k<bulbs.size();k++)
                if(bulbs.get(i)==bulbs.get(k))
                c++;
                if(c%2!=0)
                ans.add(bulbs.get(i));
            }
        }
        Collections.sort(ans);
        return ans;
    }
}