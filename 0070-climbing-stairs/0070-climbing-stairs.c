int climbStairs(int n) {
   int a,b,s;
   s=0;
   a=1;
   b=2;    
    if(n<=3)
    return n;
for(int i = 3;i<=n;i++){
    s= a+b;
    a=b;
    b=s;
    }
return s;
}