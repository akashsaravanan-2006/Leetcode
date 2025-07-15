bool checkRecord(char* s) {
    int i,n,c;
   n=strlen(s);
   c=0;
   for(i=0;i<n;i++)
   {
    if(s[i]=='A')
    c++;
    if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
    return false;
    if(c>=2)
    return false;
   } 
   return true;
}