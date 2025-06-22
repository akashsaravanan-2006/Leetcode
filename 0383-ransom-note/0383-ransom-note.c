bool canConstruct(char* ransomNote, char* magazine) {
    int n,m,i,j;
  n=strlen(ransomNote);
  m=strlen(magazine);
  for(i=0;i<n;i++)
  for(j=0;j<m;j++)
  if(ransomNote[i]==magazine[j])
  {
    magazine[j]='0';
    ransomNote[i]='0';
  }  
  for(i=0;i<n;i++)  
  if(ransomNote[i]!='0')
  return false;
  return true;
}