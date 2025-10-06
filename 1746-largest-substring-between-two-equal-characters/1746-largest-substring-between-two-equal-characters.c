int maxLengthBetweenEqualCharacters(char* s) {

  int i,j,c,grt=-1,n;
  n=strlen(s);
  for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
  if(s[i]==s[j])
  {
    c=abs((i+1)-j);
    if(c>grt)
    grt=c;
  } 
  return grt; 
}