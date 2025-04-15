int mySqrt(int x) {
    if(x!=0){
    double i;
    if(x==1)
    return 1;
    for(i=1;i<=x/2;i++){
    if(i*i==x)
    { 
        return i;
        break;
    }
    else if (i*i>x)
    {
    return i-1;
    break;
    }
    }
    return i-1;
    }
    return 0;
    
}