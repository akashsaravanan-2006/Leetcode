class Solution {
    public String[] findOcurrences(String text, String first, String second) {
       String text1[] = text.split(" ");
       String a[]=new String[100];

       int m=0;
       int n=text1.length;
       for(int i=0;i<n-2;i++)
       if(text1[i].equals(first) && text1[i+1].equals(second))
       a[m++] = text1[i+2];
       String a1[]=new String[m];
       n=0;
       for(int i=0;i<m;i++)
       a1[n++]=a[i];
       return a1; 
    }
}