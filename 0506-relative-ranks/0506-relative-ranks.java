class Solution {
    public String[] findRelativeRanks(int[] score) {
      String x,y,z;
      int m=0;
      x="Gold Medal";
      y="Silver Medal";
      z="Bronze Medal";
    int a[]=new int[score.length];
    String ans[]=new String[score.length];
    for(int k:score)
    a[m++]=k;

    for(int i=0;i<score.length;i++)
    for(int j=i+1;j<score.length;j++)
    if(score[i]<score[j])
    {
        int c=score[i];
        score[i]=score[j];
        score[j]=c;
    }
    for(int i=0;i<score.length;i++)
    for(int j=0;j<score.length;j++)
    if(a[i]==score[j])
    {
    a[i]=j+1;
    break;
    }
m=0;
for(int k:a)
ans[m++]=String.valueOf(k);
for(int i=0;i<score.length;i++)
{
if(ans[i].equals("1"))
ans[i]=x;
else if(ans[i].equals("2"))
ans[i]=y;
else if(ans[i].equals("3"))
ans[i]=z;
}
return ans;

}
}