int maxFreqSum(char* s) {
    int i,j,n,k,f,grt,sml,c;
    n=strlen(s);
    grt=0;
    for(i=0;i<n;i++)
    if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
    {
        f=0;
        for(j=0;j<i;j++)
        if(s[i]==s[j])
        {
            f=1;
            break;
        }
        c=0;
        if(f==0)
        {
            for(k=i;k<n;k++)
            if(s[i]==s[k])
            c++;
        }
        if(grt<c)
        grt=c;
    }
        sml=0;
    for(i=0;i<n;i++)
    if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
    {
        f=0;
        for(j=0;j<i;j++)
        if(s[i]==s[j])
        {
            f=1;
            break;
        }
        c=0;
        if(f==0)
        {
            for(k=i;k<n;k++)
            if(s[i]==s[k])
            c++;
        }
        if(sml<c)
        sml=c;
    }
    printf("%d%d",sml,grt);
    return sml+grt;
}