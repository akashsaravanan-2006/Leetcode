class Solution {
    public String[] uncommonFromSentences(String s1, String s2) {
        String words1[]=s1.split(" ");
        String words2[]=s2.split(" ");
        List<String> c1 = Arrays.asList(words1);
        List<String> c2 = Arrays.asList(words2);
        List<String>a=new ArrayList<>();
        List<String>b=new ArrayList<>();
        List<String>b1=new ArrayList<>();
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
        int m=0;
        for(String k:a)
        if(c2.contains(k)==false)
        b1.add(k);
        for(String k:b)
        if(c1.contains(k)==false)
        b1.add(k);
        String ans[]=new String[b1.size()];
        for(String k:b1)
        ans[m++]=k;
        return ans;
    }
}