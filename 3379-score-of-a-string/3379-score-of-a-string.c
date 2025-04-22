int scoreOfString(char* s) {
    int i,j,m,a;
    i=0;
    j=1;
    m=0;
    while(s[j]!=NULL)
    {
      a=abs(s[i]-s[j]);
      m=m+a;
      i++;
      j++;
    }
    return m;
}