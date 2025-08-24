int gcdOfOddEvenSums(int n) {
    int i,se=0,so=0;
  for(i=1;i<=n*2;i++)
  {
      if(i%2==0)
          se=se+i;
    else
        so=so+i;
  }
    if(se>so)
    {
  for(i=se;i>=0;i--)
  if(se%i==0 && so%i==0)
  return i;
    }
   for(i=so;i>=0;i--)
  if(se%i==0 && so%i==0)
  return i; 
    return -1;
}