bool isBalanced(char* num) {
    int s=0,s1=0,i,n;
    n=strlen(num);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        s=s+(num[i]-'0');
        else
        s1=s1+(num[i]-'0');

    }
    if(s==s1)
    return true;
    return false;
}