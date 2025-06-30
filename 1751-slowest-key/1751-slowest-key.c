char slowestKey(int* releaseTimes, int releaseTimesSize, char* key) {
  int i,j,m=0, ans[releaseTimesSize],a[releaseTimesSize],n=0,grt,grts ;
   ans[m++]=releaseTimes[0];
   for(i=1;i<releaseTimesSize;i++)
   ans[m++]=(releaseTimes[i]-releaseTimes[i-1]);

   for(i=0;i<m;i++)
   printf("%d\n",ans[i]);
   
   grt=ans[0];
   for(i=1;i<m;i++)
   if(grt<ans[i])
   grt=ans[i];

   for(i=0;i<m;i++)
   if(grt==ans[i])
   a[n++]=i;
   if(n==1)
   return key[a[0]];
   grts = a[0];
    for (i = 1; i < n; i++)
    if (key[a[i]] > key[grts])
    grts = a[i];
   return key[grts];
}