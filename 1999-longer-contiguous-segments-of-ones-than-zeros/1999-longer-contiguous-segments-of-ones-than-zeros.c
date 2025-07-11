bool checkZeroOnes(char* s) {
    int i,grt0,grt1,c=0,n;
  n=strlen(s);
  grt1=0;
  grt0=0;
  c=0;
  if(n==1)
  {
     if(s[0]=='0')
     return false;
     else
     return true;
  }
  for(i=0;i<n;i++)
  {
  if(s[i]!=s[i+1])
  {
     if(s[i]=='1')
     {
        if(c >grt1)
        grt1=c;
     } 
     if(s[i]=='0')
     {
        if(c > grt0)
        grt0=c;
     }
     c=0;
  }
  else
  {
    c++;
  }
  }
  if(grt1>grt0)
  return true;
  return false;

}