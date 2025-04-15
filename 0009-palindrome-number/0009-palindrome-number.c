bool isPalindrome(int n) {
    long s,r;
    if(n <0) return 0;
    long m= n;
    s=0;
    while(n!=0){
        r = n% 10;
        s = s * 10 + r;
        n=n/10;
    }
    if(m ==s)return 1;
    return 0;
    
}

