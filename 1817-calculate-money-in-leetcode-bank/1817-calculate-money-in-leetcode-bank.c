int totalMoney(int n) {
    int i,j,s=0,f;
    j=1;
    f=0;
    for(i=1;i<=n;i++)
     {
        s=s+j;
        j++;
        if (i%7==0) 
        {
            f++;
            j=1+f;
        }
    }
    return s;
}
