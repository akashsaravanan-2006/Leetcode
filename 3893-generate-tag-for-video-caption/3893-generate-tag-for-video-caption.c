char* generateTag(char* caption) {
    int i,m=0;
    char*ans=(char*)malloc(1000*sizeof(char));
    ans[m++]='#';
    i=0;
    while(caption[i]!='\0')
    {
      caption[i] = tolower(caption[i]);
      i++;
    }
    i=0;
    while(caption[i]!='\0')
    {
      if(caption[i+1]==' ')
      caption[i+2] = toupper(caption[i+2]);
      i++;
    }
    i=0;
    while(caption[i]!='\0')
    {
        if(caption[i]!=' ')
        ans[m++]=caption[i];
        i++;
        if(m>99)
        break;
    }
    ans[1]=tolower(ans[1]);
    ans[m]='\0';
    return ans;
}