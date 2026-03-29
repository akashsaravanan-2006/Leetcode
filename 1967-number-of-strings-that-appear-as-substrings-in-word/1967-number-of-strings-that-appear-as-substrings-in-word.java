class Solution {
    public int numOfStrings(String[] patterns, String word) {
        int c=0;
        for(String k:patterns)
        {
            String x=k;
            if(x.equals(word))
            c++;
            else if(x.length()==1)
            {
                for(int i=0;i<word.length();i++)
                if(word.charAt(i) == x.charAt(0))
                {
                c++;
                break;
                }
            }
            else
            {
                if (word.contains(x)) 
                c++;
            }
        }
        return c;
    }
}