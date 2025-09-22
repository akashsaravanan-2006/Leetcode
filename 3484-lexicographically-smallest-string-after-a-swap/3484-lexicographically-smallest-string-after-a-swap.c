char* getSmallestString(char* s) {
    int i,n,c,x=0,m=0,a[100];
    char*ans=(char*)malloc(20000*sizeof(char));
  n=strlen(s); 
  for(i=0;i<n;i++)
  a[m++]=s[i]-'0';
  for(i=0;i<m-1;i++)
  {
  if(a[i]%2==0 && a[i+1]%2==0 && a[i]>a[i+1])
  {
    c=a[i];
    a[i]=a[i+1];
    a[i+1]=c;
    break;
  } 
  else if(a[i]%2!=0 && a[i+1]%2!=0 && a[i]>a[i+1])
  {
    c=a[i];
    a[i]=a[i+1];
    a[i+1]=c;
    break;
  }
  }
  for(i=0;i<m;i++)
  ans[x++]=(a[i]+'0');
  ans[x]='\0';
  return ans; 
}