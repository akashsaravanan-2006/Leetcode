char* finalString(char* s) {
    int i,n,c,j,m=0,k;
    n=strlen(s);
    char*ans=(char*)malloc(2000*sizeof(char));
    for(i=0;i<n;i++)
    {
        if(s[i]!='i')
        {
            ans[m++]=s[i];
        }
        else
        {
            j=m-1;
            for(k=0;k<m/2;k++)
            {
                c=ans[k];
                ans[k]=ans[j];
                ans[j]=c;
                j--;
            }
        }
    }
    ans[m]='\0';
    return ans;
}