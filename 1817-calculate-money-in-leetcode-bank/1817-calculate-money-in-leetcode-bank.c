int totalMoney(int n) {
    int i,j,s=0;
    j=1;
  for(i=1;i<=n;i++)
  { 
    s=s+j;
    j++;
    if(i%7==0)
    j=(i/7)+1;
  }  
  return s;
}