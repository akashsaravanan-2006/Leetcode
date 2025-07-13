int dayOfYear(char* date) {
    int n=strlen(date);
    int s=0,s1=0,s2=0,s3=0,i;
    int a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<4;i++)
    s1=s1*10+(date[i]-'0');
    for(i=5;i<7;i++)
    s2=s2*10+(date[i]-'0');
    for(i=8;i<n;i++)
    s3=s3*10+(date[i]-'0');
    if ((s1 % 4 == 0 && s1 % 100 != 0) || (s1 % 400 == 0)) 
    a[2]=29;
    for(i=0;i<s2;i++)
    s=s+a[i];
    s=s+s3;
return s;
}