int numberOfSpecialChars(char* word) {
    int i,j,c,n,k,f;
    k=0;
    c=0;
    n=strlen(word);
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        if(word[i]==word[j])
        {
            f=1;
            break;
        }
        if(f==0)
        {
            word[k]=word[i];
            k++;
        }
    }
   for(i=0;i<k;i++)
   {
   if(word[i]>='a' && word[i]<='z')
   {
   for(j=i+1;j<k;j++)
   if(word[i]==(tolower(word[j])))
   c++;
   }
   else
   {
   for(j=i+1;j<k;j++)
   if(word[i]==(toupper(word[j])))
   c++;
   }
   }
   return c;

    
}