bool isPowerOfTwo(int n) {
    int i;
    for(i=0;i<=50;i++)
    if(pow(2,i)==n)
    return true;

    return false;
    
}