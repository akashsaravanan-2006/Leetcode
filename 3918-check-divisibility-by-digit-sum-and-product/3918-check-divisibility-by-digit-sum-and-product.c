bool checkDivisibility(int n) {
    int i,s=0,f=1,m=0,a[100],x;
    x=n;
    while(n!=0)
    {
        a[m++]=n%10;
        n=n/10;
    }
    for(i=0;i<m;i++)
    s=s+a[i];
    for(i=0;i<m;i++)
    f=f*a[i];
    if(x%(s+f)==0)
    return true;
    return false;
}