int maxPower(char* s) {
    int i,grt,c=0,n;
    grt=0;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
    if(s[i]==s[i+1])
    c++;
    else
    {
        if(grt<c)
        grt=c;
        c=0;
    }
    }
    return grt+1;
}