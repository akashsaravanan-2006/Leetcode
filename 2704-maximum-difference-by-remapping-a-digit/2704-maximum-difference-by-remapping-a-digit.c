int minMaxDifference(int num) {
    int i,j,k,r,c,x,y,m,n;
    int  a[100],b[100] ;
    k=0;
    while(num!=0)
    {
        r=num%10;
        a[k]=r;
        k++;
        num=num/10;
    }
    j=k-1;
    for(i=0;i<k/2;i++)
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
        j--;
    }
    for(i=0;i<k;i++)
    b[i]=a[i];

    for(i=0;i<k;i++)
    if(a[i]!=9)
    {
    m=a[i];
    break;
    }
    for(i=0;i<k;i++)
    if(a[i]!=0)
    {
    n=a[i];
    break;
    }

        for(i=0;i<k;i++)
        if(a[i]==m)
        a[i]=9;

        for(i=0;i<k;i++)
        if(b[i]==n)
        b[i]=0;

    x=0;
    y=0
    ;
    for(i=0;i<k;i++)
   {
    x=x*10+a[i];
    y=y*10+b[i];
   }
    return x-y;


}