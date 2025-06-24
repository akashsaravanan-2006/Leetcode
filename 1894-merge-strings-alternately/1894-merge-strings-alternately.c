

char * mergeAlternately(char * word1, char * word2){
  char*ans=(char*)malloc(20000*sizeof(char));
  int i,n,m,n1,j;
  m=0;
  n=strlen(word1);
  n1=strlen(word2);
  if(n==n1)
  {
  for(i=0;i<n;i++)
  {
    ans[m++]=word1[i];
    ans[m++]=word2[i];
  }
  ans[m]='\0';
  return ans;
  }
  if(n>n1)
  {
    for(i=0;i<n1;i++)
    {
    ans[m++]=word1[i];
    ans[m++]=word2[i];  
    }
    for(j=i;j<n;j++)
    ans[m++]=word1[j];
    ans[m]='\0';
    return ans;
  }
  if(n<n1)
  {
    for(i=0;i<n;i++)
    {
    ans[m++]=word1[i];
    ans[m++]=word2[i];  
    }
    for(j=i;j<n1;j++)
    ans[m++]=word2[j];
  }
  ans[m]='\0';
    return ans;
}