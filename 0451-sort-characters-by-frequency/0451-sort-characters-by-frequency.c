char* frequencySort(char* s) {
   int a[100] ,i,j,c,k,m=0,x=0,f,n;
   char*ans=(char*)malloc(2000000*sizeof(char));
   n=strlen(s);
   char b[100],y;
   n=strlen(s);
   for(i=0;i<n;i++) 
   {
    f=1;
    for(j=0;j<i;j++)
    if(s[i]==s[j])
    {
        f=0;
        break;
    }
    c=0;
    if(f==1)
    {
        for(k=i;k<n;k++)
        if(s[i]==s[k])
        c++;
        a[m++]=c;
        b[x++]=s[i];
    }
   }
   for(i=0;i<m;i++)
   for(j=i+1;j<m;j++)
   if(a[i]<a[j])
   {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
    y=b[i];
    b[i]=b[j];
    b[j]=y;
   }
   f=0;
for(i=0;i<m;i++)
{
n=a[i];
for(j=0;j<n;j++)
ans[f++]=b[i];
}
ans[f]='\0';
return ans;
   
}