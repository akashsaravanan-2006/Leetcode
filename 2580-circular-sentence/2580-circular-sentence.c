bool isCircularSentence(char* sentence) {
    int i,n,f=0;
    n=strlen(sentence);
    for(i=0;i<n;i++)
    if(sentence[i]==' ')
    {
        f=1;
        break;
    }
    if(f==1)
    {
   for(i=0;i<n;i++) 
   if(sentence[i]==' ' && sentence[i-1] !=sentence[i+1])
   return false;
    }
    if(f==0)
    {
    if(sentence[0]!=sentence[n-1])
    return false;
    }
    if(sentence[0]==sentence[n-1])
    return true;
    return false;
}