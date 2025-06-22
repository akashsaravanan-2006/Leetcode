char* largestGoodInteger(char* num) {
  char*a=(char*)malloc(4*sizeof(char)); 
  int i,j,k,n,s,f=0,grt=0;
  n=strlen(num) ;
  for(i=0;i<n-2;i++)
  if(num[i]==num[i+1] && num[i+1]==num[i+2] && num[i]==num[i+2])
  {
    s=num[i]-'0';
    f=1;
    if(grt<s)
    grt=s;
  }
  if(f==1)
  {
  for(i=0;i<3;i++)
  a[i]=grt+'0';
  a[i]='\0';
  return a;
  }
  return "";
}