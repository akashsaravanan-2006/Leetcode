char findTheDifference(char* s, char* t) {
    int a,b,i;
    a=strlen(s);
    b=strlen(t);
    int x[1000]={0};
     for(i=0;i<b;i++)
    x[t[i]]=x[t[i]]+1;
    for(i=0;i<a;i++)
    x[s[i]]=x[s[i]]-1;
    for(i=0;i<1000;i++)
    if(x[i]==1)
    {
        break;
    }
    return i;
    //return ' ';
}