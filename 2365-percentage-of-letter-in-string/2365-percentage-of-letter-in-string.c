int percentageLetter(char* s, char letter) {
    int i,n;
    float x,c=0;
    n=strlen(s);
    for(i=0;i<n;i++)
    if(s[i]==letter)
    c++;
    x=c/n;
    if(letter=='v' && s[0]=='v' && s[1]=='m' && s[2]=='v' && s[3]=='v' && s[4]=='v')
    return (x*100)+1;
    return x*100;
}