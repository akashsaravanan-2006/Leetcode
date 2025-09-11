class Solution{
public String sortVowels(String s){
String ans[]=new String[100000];
char vowel[]=new char[100000];
int i,m=0,m1=0;
for(i=0;i<s.length();i++)
if(s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U'||s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u')
vowel[m++]=s.charAt(i);
Arrays.sort(vowel,0,m);
int j=0;
for(i=0;i<s.length();i++)
{
if(s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U'||s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u'){
ans[m1++]=String.valueOf(vowel[j]);
j++;
}
else
ans[m1++]=String.valueOf(s.charAt(i));
}
String finalAns="";
for(int k=0;k<m1;k++)
finalAns=finalAns+ans[k];
return finalAns;
}
}
