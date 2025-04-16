int xorOperation(int n, int start) {
    int i,m,s,c;
    m=start;
    c=1;
    i=start+2;
    if(n==1)
    return start;
 while(c!=n)
{
   s=m ^ i;
   m=s;
   c++;
   i=i+2;
}
return s;
}