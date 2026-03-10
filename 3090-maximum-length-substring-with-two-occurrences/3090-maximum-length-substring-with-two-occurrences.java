class Solution {
    public int maximumLengthSubstring(String s) {
        String s1="";
        int a=0,grt=0;
for(int i=a;i<s.length();i++)
{
s1=s1+s.charAt(i);
if(s1.length()>1)
{
int f=1;
for(int i1=0;i1<s1.length();i1++)
{
f=1;
for(int j=0;j<i1;j++)
{
if(s1.charAt(i1)==s1.charAt(j))
{
f=0;
break;
}
}
int c=0;
if(f==1)
{
for(int k=i1;k<s1.length();k++)
{
if(s1.charAt(k)==s1.charAt(i1))
c++;
}
if(c>2)
{
grt=Math.max(grt,s1.length()-1); 
f=2;
break;
}
}
}
if(f==2)
{
i=a++;
s1="";
}
else
{
grt=Math.max(grt,s1.length());
}
}

}
return grt;
    }
}