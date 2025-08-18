int isPrefixOfWord(char* sentence, char* searchWord) {
    int i,j,n,n1,c=1,f,k;
    n=strlen(sentence);
    n1=strlen(searchWord);
for(i=0;i<n;i++)
{
    if(i==0 || sentence[i-1]==' ')  
    {
    if(sentence[i]==searchWord[0])
    {
       f=0;
       k=0;
      for(j=i;j<i+n1;j++)
      {
      if(searchWord[k]!=sentence[j])
      {
        f=1;
        break;
      }
      k++;
      }
      if(f==0)
      return c;
    }
    }
    if(sentence[i]==' ' && sentence[i+1]!=' ')
    c++;
}
 return -1;
}