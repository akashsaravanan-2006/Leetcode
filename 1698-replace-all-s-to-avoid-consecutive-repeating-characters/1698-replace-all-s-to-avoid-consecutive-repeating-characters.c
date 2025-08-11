char* modifyString(char* s) {
    int i,n,m,k;
    m=0;
    n=strlen(s);
 char*ans=(char*)malloc(1000*sizeof(char));   
 for(i=0;i<n;i++)
 {
 if(s[i]=='?')
 {
    if(i==0)
    {
    for(k='a';k<='z';k++)
    if(s[i+1]!=k)
    {
    s[i]=k;
    ans[m++]=k;
    break;
    }
    }
    else
    {
  for(k='a';k<='z';k++)
  if( i!=0 && s[i-1]!=k && s[i+1]!=k)
  {
  s[i]=k;
  ans[m++]=k;
  break;
  }
}
 }
 else
 ans[m++]=s[i];
}
ans[m]='\0';
return ans;
}