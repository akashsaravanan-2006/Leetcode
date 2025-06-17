int findPermutationDifference(char* s, char* t) {
    int i,j,n,c,m;
    n=strlen(s);
    m=strlen(t);
    c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        if(s[i]==t[j])
        c=c+abs(i-j);
    }
    return c;
}