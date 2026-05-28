class Solution {
    public int[] scoreValidator(String[] events) {
        int ans[]=new int[2];
        int s=0,c=0;
        for(String k:events)
        {
            if(k.equals("W"))
            {
            c++;
            if(c==10)
            break;
            }
            else if(k.equals("WD"))
            s++;
            else if(k.equals("NB"))
            s++;
            else
            {
            int m= Integer.valueOf(k);
            s=s+m;
            }
        }
        ans[0]=s;
        ans[1]=c;
        return ans;
    }
}