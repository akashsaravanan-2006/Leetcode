bool areOccurrencesEqual(char* s) {
     int i,j,k,c,n,x=0,c1,f;
  n=strlen(s);
  for(i=0;i<n;i++)
  {
    f=0;
    for(j=0;j<i;j++)
    if(s[i]==s[j])
    {
        f=1;
        break;
    }
    c=0;
    if(f==0)
    {
        x++;
        for(k=i;k<n;k++)
        if(s[k]==s[i])
        c++;
        if(x!=1 && c!=c1)
        return false;
        c1=c;
    }
  }
  return true;
}