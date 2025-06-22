char* reversePrefix(char* word, char ch) {
    int i,m,j,n,f=0;
    char*ans=(char*)malloc(2000*sizeof(char));  
    m=0;
    n=strlen(word);
    for(i=0;i<n;i++)
    {
    if(ch==word[i])
    {
    f=1;
    break;
    }
    }
    if(f==1)
    {
    for(j=i;j>=0;j--)
    ans[m++]=word[j];
    for(j=i+1;j<n;j++)
    ans[m++]=word[j];
    ans[m]='\0';
    return ans;
    }
    else
    {
        m=0;
        for(i=0;i<n;i++)
        ans[m++]=word[i];
        ans[m]='\0';
    }
    return ans;
}