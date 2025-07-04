bool hasSameDigits(char* s) {
    int i,j,m,n,f;
    n=strlen(s);
    int a[n];
    for(i=0;i<n;i++)
    a[i]=s[i];
    do
    {
        s=0;
        m=0;
      for(i=0;i<n-1;i++)
      {
        j=i+1;
        a[m++]=(a[i]+a[j])%10;
      }
      f=0;
      for(i=0;i<m-1;i++)
      if(a[i]!=a[i+1])
      {
        f=1;
        n=m;
      }
      if(f==0)
      return true;
      if(m==2)
      return false;
    }while(f==1);
    return true;
}