int countTriples(int n) {
    int i,j,k,c;
    c=0;
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   for(k=1;k<=n;k++)
   if((j*j)+(k*k)==(i*i)) 
   c++;
   return c;
}