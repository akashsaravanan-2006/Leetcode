char* firstPalindrome(char** words, int wordsSize) {
    int i,j,k,n,m,a,l,f;
    char x[100],y[100];
    char*ans=(char*)malloc(20000*sizeof(char));
   for(i=0;i<wordsSize;i++)
   {
    m=0;
    n=strlen(words[i]);
    for(j=0;j<n;j++)
    x[m++]=words[i][j];
    a=0;
    for(k=m-1;k>=0;k--)
    y[a++]=x[k];
    f=0;
    for(l=0;l<m;l++)
    if(x[l]!=y[l])
    {
        f=1;
        break;
     }
     if(f==0)
     {
    for(f=0;f<m;f++)
    ans[f]=x[f];
    ans[f]='\0';
    return ans;
     }

   } 
   return "";
   }