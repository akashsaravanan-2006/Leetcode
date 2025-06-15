int firstUniqChar(char* s) {
    int i,j,k,n,f,c;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        if(s[i]==s[j])
        {
            f=0;
            break;
        }
        c=0;
        if(f==1)
        {
            for(k=i;k<n;k++)
            if(s[i]==s[k])
            c++;
            if(c==1)
            return i;
        }
    }
return -1;
}