int arrangeCoins(int n) {
    int i,m;
    m=n;
  for(i=1;i<=n;i++)
  {
  m=m-i;
  if(i+1>m)
  return i;
  }
  return 0;

}