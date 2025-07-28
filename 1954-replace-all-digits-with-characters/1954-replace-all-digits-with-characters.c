char* replaceDigits(char* s) {
    char a[] = {'a','b','c','d','e','f','g','h','i','j',
            'k','l','m','n','o','p','q','r','s','t',
            'u','v','w','x','y','z'};
        char*ans=(char*)malloc(20000*sizeof(char));
        int i,m=0,x,y,n;
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            ans[m++]=s[i];
            else
            {
                if(i==0)
                ans[m++]='a';
                else
                {
                x=s[i-1]-'a';
                y=s[i]-'0';
                ans[m++]=a[x+y];
                }
            }
        }
        ans[m]='\0';
        return ans;

}