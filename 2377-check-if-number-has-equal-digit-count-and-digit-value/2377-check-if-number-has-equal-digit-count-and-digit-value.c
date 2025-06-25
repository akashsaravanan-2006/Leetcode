bool digitCount(char* num) {
    int i,j,n,c,m;
    m=0;
    c=0;
    n=strlen(num);
     int a[n+1];
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    if(i==(num[j]-'0'))
    c++;
    a[i]=c;
    c=0;
    }
    for(i=0;i<n;i++)
    if(a[i]!=(num[i]-'0'))
    return false;
    return true;
    
}