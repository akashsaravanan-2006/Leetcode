
    char repeatedCharacter(char* s) {
    int a[260]={0},i,n;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        a[s[i]]=a[s[i]]+1;
        if(a[s[i]]==2)
        break;
    }
        return s[i];
}