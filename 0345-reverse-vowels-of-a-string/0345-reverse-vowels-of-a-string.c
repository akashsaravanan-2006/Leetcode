char* reverseVowels(char* s) {
    int i,m=0,j,c,n;
    char a[100000];
     char*ans=(char*)malloc(200000*sizeof(char));
n=strlen(s);
for(i=0;i<n;i++)
if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
a[m++]=s[i];
a[m]='\0';
j=m-1;
for(i=0;i<m/2;i++)
{
    c=a[i];
    a[i]=a[j];
    a[j]=c;
    j--;
}
j=0;
m=0;
for(i=0;i<n;i++)
{
if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
{
    ans[m++]=a[j];
    j++;
}
else
{
    ans[m++]=s[i];
}
}
ans[m++]='\0';
return ans;


    
}