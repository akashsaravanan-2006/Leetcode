class Solution {
    public boolean isOneBitCharacter(int[] bits) {
        int i=0;
        while(i<bits.length-1)
        {
            i=i+1+bits[i];
        }
        if(i==bits.length-1)
        return true;
        return false;
    }
}