class Solution {
    public boolean isAnagram(String s, String t) {

        
        char a[] = s.toCharArray();
    
        char b[] = t.toCharArray();
        if(a.length != b.length)
        return false;
        Arrays.sort(a);
        Arrays.sort(b);
        int n = a.length;
        for(int i=0;i<n;i++)
        if(a[i] != b[i])
        return false;
        return true;

    }
}