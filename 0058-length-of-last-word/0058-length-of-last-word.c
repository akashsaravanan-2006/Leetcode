int lengthOfLastWord(char* s) {
    int i,n,c;
    c=0;
 n=strlen(s);
 n=n-1;
 while(s[n]==' ')
 {
  n=n-1;
 }
 for(i=n;i>=0;i--)
 {
 if(s[i]!=' ')
 c++;
 else
 break;
 }
return c;
}