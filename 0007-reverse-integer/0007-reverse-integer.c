int reverse(int x){
    int r;
    long s;
    s=0;
    
    while(x!=0)
    {
        r=x%10;
        s=s*10+r;
        x=x/10;
    }
    if(pow(-2,31)<=s && s<=pow(2,31)-1)
    return s;
    return 0;
}
