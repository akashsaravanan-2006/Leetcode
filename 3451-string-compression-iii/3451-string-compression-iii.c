char* compressedString(char* word) {
    int i,c=0,m=0,n;
    char*a=(char*)malloc(20000000*sizeof(char));
    n=strlen(word);
for(i=0;i<n;i++)
{
    c++;
if(word[i]!=word[i+1])
{
       if(c<=9)
       {
       a[m++]=c+'0';
       a[m++]=word[i];
       }
       else
       {
          while(c>0)
          {
            if(c>9)
            {
            c=c-9;
            a[m++]='9';
            a[m++]=word[i];
            }
            else
            {
            a[m++]=c+'0';
            a[m++]=word[i];
            c=0;
            }
          }
       }
       c=0;
}
}
a[m]='\0';
return a;
}