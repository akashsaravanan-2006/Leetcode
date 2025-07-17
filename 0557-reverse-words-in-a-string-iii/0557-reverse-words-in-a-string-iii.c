char* reverseWords(char* s) {
    int n,i,z=0,m=0,x,y,c,j,k;
    char*ans=(char*)malloc(2000000*sizeof(char));
    n=strlen(s);
    x=0;
    for(i=0;i<n;i++)
    {
        if(s[i]!=' ')
        ans[m++]=s[i];
        else 
        {
           j=m-1;
            for(k=x;k<j;k++)
            {
                c = ans[j];
                ans[j] = ans[k];
                ans[k] = c;
                j--;
            }
            x=m+1;
            ans[m++]=' ';
        }
    }
    x=0;
     ans[m]='\0';
    for(i=m-1;i>=0;i--)
    if(ans[i]==' ')
    {
        m=i;
        break;
    }
    if(i<0) 
    m=-1;
    j=n-1;
for(i=m+1;i<j;i++) 
{
    c=ans[i];
    ans[i]=ans[j];
    ans[j]=c;
    j--;
}
return ans;
}