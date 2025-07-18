bool checkString(char* s) {
    int i,n;
    n=strlen(s);
  for(i=0;i<n;i++)
  if(s[i]=='b' && s[i+1]=='a')
  return false;
  return true;  
}