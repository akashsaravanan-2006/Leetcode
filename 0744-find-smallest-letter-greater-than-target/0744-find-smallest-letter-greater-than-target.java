class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        char sml=letters[0];
        for(char k:letters)
        if(k>target)
        {
            sml=k;
            break;
        }
        for(char k:letters)
        if(k>target && k<sml)
        sml=k;
        return sml;
    }
}