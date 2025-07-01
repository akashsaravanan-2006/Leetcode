int minimizedStringLength(char* s) {
    int i,j,k,f,n;
       n=strlen(s);
    char a[n];
    for(i=0;i<n;i++)
    a[i]=s[i];
    k=0;
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        if(a[i]==a[j])
        {
            f=1;
            break;
        }
        if(f==0)
        {
          a[k]=a[i];
          k++;
        }
    }
    return k;
}