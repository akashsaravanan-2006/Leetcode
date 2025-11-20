class Solution {
    public int countWords(String[] words1, String[] words2) {
        int m=0;
        List<String>a=new ArrayList<>();
        List<String>b=new ArrayList<>();
        for(int i=0;i<words1.length;i++)
        {
        int f=0;
        for(int j=0;j<words1.length;j++)
        if(words1[i].equals(words1[j])&& j!=i)
        {
            f=1;
            break;
        }
        if(f==0)
        a.add(words1[i]);
        }
        m=0;
        for(int i=0;i<words2.length;i++)
        {
        int f=0;
        for(int j=0;j<words2.length;j++)
        if(words2[i].equals(words2[j]) && j!=i)
        {
            f=1;
            break;
        }
        if(f==0)
        b.add(words2[i]);
        }
        int c=0;
        for(String k:a)
        if(b.contains(k)==true)
        c++;
        return c;
    }
}