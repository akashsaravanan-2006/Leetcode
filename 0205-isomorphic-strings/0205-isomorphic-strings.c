bool isIsomorphic(char* s, char* t) {
    int i,j,n,n1;
    n=strlen(s);
    n1=strlen(t);
    if(n!=n1)
    return false;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    if(((s[i]==s[j]) && (t[i]!=t[j]))|| ((s[i]!=s[j]) && (t[i]==t[j])))
        return false;
    return true;
}