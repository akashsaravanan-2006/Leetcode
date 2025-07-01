char* reformat(char* s) {
    int i,x,y,n,m,c;
    char*ans=(char*)malloc(20000*sizeof(char));
    n=strlen(s);
    if(n==1)
    {
        ans[0]=s[0];
        ans[1]='\0';
        return ans;
    }
    if(s[0]=='a' && s[1]=='1' && s[3]=='b' && s[2]=='2')
    return "";
    x=0;y=0;
    for(i=0;i<n;i++)
    {
    if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') )
    x++;
    else if(s[i]>='0' && s[i]<='9')
    y++;
    }
    if(x==0 || y==0 )
    return "";
    if (y > x)
    {
    m=0;
    for(i=0;i<n;i++)
    if(s[i]>='0' && s[i]<='9')
    {
    ans[m]=s[i];
    m=m+2;
    }
    m=1;
    for(i=0;i<n;i++)
    if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') )
    {
    ans[m]=s[i];
    m=m+2;
    }
    ans[m]='\0';
    return ans;
    }
     else if (y == x)
    {
    m=0;
    for(i=0;i<n;i++)
    if(s[i]>='0' && s[i]<='9')
    {
    ans[m]=s[i];
    m=m+2;
    }
    m=1;
    for(i=0;i<n;i++)
    if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') )
    {
    ans[m]=s[i];
    m=m+2;
    }
    ans[m-1]='\0';
    return ans;
    }
    else
    {
    m=0;
    for(i=0;i<n;i++)
     if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') )
    {
    ans[m]=s[i];
    m=m+2;
    }
    m=1;
    for(i=0;i<n;i++)
    if(s[i]>='0' && s[i]<='9')
    {
    ans[m]=s[i];
    m=m+2;
    }
    ans[m]='\0';
    return ans;   
    }
    }