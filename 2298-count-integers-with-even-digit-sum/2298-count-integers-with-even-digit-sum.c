int countEven(int num) {
    int i,c,r,m,s;
    c=0;
    for(i=2;i<=num;i++)
    {
        if(i<9)
        {
        if(i%2==0)
        c++;
        }
        else
        {
            s=0;
            m=i;
           while(m!=0)
           {
            r=m%10;
            s=s+m;
            m=m/10;
           }
           if(s%2==0)
           c++;
        }
    }
    return c;
}