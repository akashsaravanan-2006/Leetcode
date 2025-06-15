
    int maxDiff(int num) {
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

    // For a[], replace m with 9
    for(i=0;i<k;i++)
        if(a[i]==m)
            a[i]=9;

    // For b[]
    if(b[0] != 1) {
        n = b[0];
        for(i=0;i<k;i++)
            if(b[i]==n)
                b[i]=1;
    } else {
        n = -1;
        for(i=1;i<k;i++) {
            if(b[i]!=0 && b[i]!=1) {
                n = b[i];
                break;
            }
        }
        if(n != -1) {
            for(i=0;i<k;i++)
                if(b[i]==n)
                    b[i]=0;
        }
    }

    x=0;
    y=0;
    for(i=0;i<k;i++)
    {
        x=x*10+a[i];
        y=y*10+b[i];
    }

    printf("%d,%d\n",x,y);
    return x-y;
}