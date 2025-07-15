bool isValid(char* word) {
    int i,n,m=0,c=0,b=0,x=0;
    char a[100];
    n=strlen(word);
    for(i=0;i<n;i++)
    {
        if((word[i]>='A' && word[i]<='Z')|| (word[i]>='a' && word[i]<='z') || (word[i]>='0' && word[i]<='9'))
        a[m++]=word[i];
        else
        return false;
    }
    if(m!=3 && m<3)
    return false;
    for(i=0;i<m;i++)
     {
     if(a[i]=='A' || a[i]=='E'|| a[i]=='I' || a[i]=='O' ||a[i]=='U' || a[i]=='a' || a[i]=='e'|| a[i]=='i' || a[i]=='o' ||a[i] =='u')
        c++;
    else if(a[i]>='0' && a[i]<='9')
    x++;
     else if(a[i]!='A' || a[i]!='E'|| a[i]!='I' || a[i]!='O' ||a[i]!='U' || a[i]!='a' || a[i]!='e'|| a[i]!='i' || a[i]!='o' ||a[i] !='u')
       b++;
     }
    
      if(c!=0 && b!=0)
     return true;
     return false;
}