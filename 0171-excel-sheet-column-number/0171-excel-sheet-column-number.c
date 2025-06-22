int titleToNumber(char* columnTitle) {
 int i,n,s,x;
 n=strlen(columnTitle);
 n=n-1;
 i=0;
 s=0;
  while(columnTitle[i]!=0)
  {
  x=1+(columnTitle[i]-'A');
  s=s+x*pow(26,n) ;
  i++;
  n--;
  }
  return s;
}