class Solution {
    public int numOfStrings(String[] patterns, String word) {
        int c=0;
        for(String k:patterns)
        {
            
                if(word.contains(k)) 
                c++;
        }
        return c;
    }
}