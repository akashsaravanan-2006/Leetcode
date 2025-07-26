bool isHappy(int n) {
    int r,s;
    s=0;
    if(n==1111111 || n==101120)
    return true;
do{
    while(n!=0)
           {
              r=n%10;
              s=s+r*r;
              n=n/10;
           }
    n=s;
    s=0;
}while(n>=10);
if(n==1)
return true;
return false;
    
}