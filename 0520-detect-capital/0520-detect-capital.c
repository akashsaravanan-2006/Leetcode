bool detectCapitalUse(char* word) {
    int i,n,m,a,b;
    n=strlen(word);
    int s[n];
    for(i=0;i<n;i++)
    {
        if(word[i]>='a' && word[i]<='z')
         s[i]=0;
        else
        s[i]=1;
    }
    if(n>=2)
    {
        a=0;
        b=0;
        for(i=0;i<n;i++)
        {
        if(s[i]==1)
        a++;
        else
        b++;
        }
        if(n==a || n==b)
        return true;
        if(a==1 && b==(n-a))
        {
            if(s[0]==1)
            return true;
            else
            return false;
        }
       return false;
    }
    return true;
    


}