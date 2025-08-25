int findComplement(int n) {
   int i,r,m=0,b[100],c;
    long long s=0,x=0;
    i=0;
    if(n==0)
        return 1;
    if(n==1)
        return 0;
    while(n!=0)
    {
        r=n%2;
        b[i++]=r;
        n=n/2;
    }
    m=i;
    for(i=0;i<m;i++)
    {
        if(b[i]==0)
            b[i]=1;
        else
            b[i]=0;
    }
    s=0;
    for(i=m-1;i>=0;i--)
    s = s*2 + b[i];
    return s;   
}