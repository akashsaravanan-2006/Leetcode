int trailingZeroes(int n) {
    int s;
    s=0;
    while(n>0)
    {
        n=n/5;
        s=s+n;
    }
    return s;
}