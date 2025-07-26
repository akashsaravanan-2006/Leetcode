int countDigits(int num) {
    int r,c,m;
    c=0;
    m=num;
    while(num!=0)
    {
        r=num%10;
        if(m%r==0)
        {
        c=c+1;
        }
        num=num/10;
    }
    return c;
}