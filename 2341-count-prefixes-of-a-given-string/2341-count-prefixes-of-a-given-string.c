int countPrefixes(char** words, int wordsSize, char* s) {
    int i,n,j,k,c=0,n1;
    n=strlen(s);
    for(i=0;i<wordsSize;i++)
    if(words[i][0]==s[0])
    {
        n1=strlen(words[i]);
        k=0;
        for(j=0;j<n1;j++)
        {
        if(words[i][j]==s[k] && k<n)
        k++;
        else
        break;
        }
        if(j==n1)
        c++;
    }
return c;
}