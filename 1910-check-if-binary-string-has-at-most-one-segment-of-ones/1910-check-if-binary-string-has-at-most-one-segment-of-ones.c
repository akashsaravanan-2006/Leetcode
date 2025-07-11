bool checkOnesSegment(char* s) {
    int i,n;
    n=strlen(s);
    for(i=0;i<n-1;i++)
    if(s[i]=='0' && s[i+1]=='1')
    return false;
    return true;
}