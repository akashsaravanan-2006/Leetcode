int reverseDegree(char* s) {
    int i,c,a,b,d;
    c=0;
    i=0;
    while(s[i]!=NULL)
    {
       b=s[i] - 'a' + 1;
       a=abs(26-(b-1));
       d=(i+1)*a;
       printf("%d",a);
       c=c+d;
       i++;
    }
    return c;
}