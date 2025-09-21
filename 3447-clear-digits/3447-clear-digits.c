char* clearDigits(char* s) {
    int i,f,n,m=0,j;
char*ans=(char*)malloc(20000*sizeof(char));
   n=strlen(s);
   for(i=0;i<n;i++)
   if(s[i]>='0' && s[i]<='9')
   {
     f=1;
     for(j=i;j>=0;j--)
     if(!(s[j]>='0' && s[j]<='9'))
     {
     f=0;
     s[j]='0';
     break;
     }
     if(f==1)
     return "";
   }
   for(i=0;i<n;i++)
   if(!(s[i]>='0' && s[i]<='9'))
   ans[m++]=s[i];
   ans[m]='\0';
   return ans;
}