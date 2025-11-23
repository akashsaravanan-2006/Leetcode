class Solution {
    public boolean checkAlmostEquivalent(String word1, String word2) {
      char a[]=word1.toCharArray();
      char b[]=word2.toCharArray();
      int a1[]=new int[26];
      int b1[]=new int[26];
      List<Character>x1=new ArrayList<>();
      for(char k:a) 
      x1.add(k);
      List<Character>x2=new ArrayList<>();
      for(char k:b) 
      x2.add(k);
      int m=0;
      Arrays.sort(a);
      Arrays.sort(b);
      for(int i=0;i<a.length;i++)
      {
        int f=1;
        for(int j=0;j<i;j++)
        if(a[i]==a[j])
        {
            f=0;
            break;
        }
        int c=0;
        if(f==1)
        {
            for(int k=i;k<a.length;k++)
            if(a[i]==a[k])
            c++;
            if(x2.contains(a[i])==false && c>3)
            return false;
            a1[a[i]-'a']=c;
        }
      }
      m=0;
      for(int i=0;i<b.length;i++)
      {
        int f=1;
        for(int j=0;j<i;j++)
        if(b[i]==b[j])
        {
            f=0;
            break;
        }
        int c=0;
        if(f==1)
        {
            for(int k=i;k<b.length;k++)
            if(b[i]==b[k])
            c++;
            if(x1.contains(b[i])==false && c>3)
            return false;
            b1[b[i]-'a']=c;
        }
      }
    for(int i=0;i<26;i++)
    if(Math.abs(a1[i]-b1[i])>3)
    return false;
    return true;
    }
}