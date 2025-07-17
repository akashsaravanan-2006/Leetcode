bool halvesAreAlike(char* s) {
    int i,n,m,c=0,c1=0;
    n=strlen(s);
    m=n/2;
    for(i=0;i<m;i++)
    if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
    c++;
    for(i=m;i<n;i++)
     if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U')
    c1++;
    if(c==c1)
    return true;
    return false;


}