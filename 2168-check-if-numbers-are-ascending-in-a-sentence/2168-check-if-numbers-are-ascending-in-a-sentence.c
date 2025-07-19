bool areNumbersAscending(char* s) {
    int n,i,a[100],m=0,c=0,c1,r,f;
   n=strlen(s);
   for(i=0;i<n;i++)
   {
   if(s[i]>='0' && s[i]<='9')
   c=c*10+(s[i]-'0');
   else if(c!=0)
   {
    a[m++]=c;
    c=0;
   }
   }
   if (c!=0)
   a[m++]=c;
   for(i=0;i<m;i++)
   printf("%d\n",a[i]);
    for(i=0;i<m-1;i++)
    if(a[i]>a[i+1] || a[i]==a[i+1])
    return false;
    return true;
   

}