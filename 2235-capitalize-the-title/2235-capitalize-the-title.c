char* capitalizeTitle(char* title) {
    char*ans=(char*)malloc(20000*sizeof(char));
    int n,i,m=0,c,x=0;
    n=strlen(title);
    for(i=0;i<n;i++)
    ans[m++]=tolower(title[i]);
    c=0;
    for(i=0;i<m;i++)
    {
        if(ans[i]!=' ')
        x++;
        else
        {
            if(x>2)
            ans[c]=toupper(ans[c]);   
            c=i+1;
            x=0;
        }

    }
    if(x>2)
    ans[c]=toupper(ans[c]);
    ans[m]='\0';
    return ans;
}