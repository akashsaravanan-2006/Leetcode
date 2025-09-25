int maxNumberOfBalloons(char* text) {
    int i,m=0,n,j,f,c,k,sml;
    n=strlen(text);
     sml=n;
    char a[n];
    for(i=0;i<n;i++)
    if(text[i]=='b' ||text[i]=='a' ||text[i]=='l' ||text[i]=='o' ||text[i]=='n')
    a[m++]=text[i];
    if(m<7)
    return 0;
    char req[] = {'b','a','l','o','n'};
    for(i=0;i<5;i++)
    {
      c=0;
      for(k=0;k<m;k++)
      if(req[i]==a[k])
      c++;
      if(req[i]=='l' || req[i]=='o')
      c=c/2;
      if(c<sml)
      sml=c;  
    }
    return sml;
}