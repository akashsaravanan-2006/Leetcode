bool isBalanced(char* num) {
    int a[100],s=0,s1=0,i,m=0,n;
    n=strlen(num);
    for(i=0;i<n;i++)
    a[m++]=num[i]-'0';
    for(i=0;i<m;i=i+2)
    s=s+a[i];
    for(i=1;i<m;i=i+2)
    s1=s1+a[i];
    if(s==s1)
    return true;
    return false;
}