char* reverseWords(char* s) {
    int i,j,c,n,m=0,x=0,k,y=0;
    char a[100000];
    char*ans=(char*)malloc(2000000*sizeof(char));
    n=strlen(s);
    for(i=n-1;i>=0;i--)
    if(s[i]!=' ')
    {
    n=i;
    break;
    }
    for(i=n;i>=0;i--)
    {
        if(s[i]!=' ')
            a[m++]=s[i];
        else
            a[m++]=' ';
    }
    x=0;
    for(i=0;i<=m;i++) 
    { 
        if(a[i]==' ' || i == m)
        {
            y=i-1;
            j=y;
            for(k=x;k<=(x+y)/2;k++)
            {
                c=a[k];
                a[k]=a[j];
                a[j]=c;
                j--;
            }
            x=i+1;
        }
    }
     a[m]='\0';
     n=0;
     for(i=0;i<m;i++)
     {
        if(a[i]!=' ')
        ans[n++]=a[i];
        else
        {
            if(a[i]==' ' && a[i+1] !=' ')
            ans[n++]=' ';
        }
     }
     for(i=n-1;i>=0;i--)
     if(ans[i]!=' ')
     {
     ans[i+1]='\0';
     break;
     }
    return ans;
}
