bool judgeCircle(char* moves) {
    int a,b,n,i;
   a=0;
   b=0;
   n=strlen(moves);
   for(i=0;i<n;i++) 
   {
   if(moves[i]=='R')
   a++;
   else if(moves[i]=='L')
   a--;
   else if(moves[i]=='U')
   b++;
   else 
   b--;
   }
   if(a==0 && b==0)
   return true;
   return false;
}