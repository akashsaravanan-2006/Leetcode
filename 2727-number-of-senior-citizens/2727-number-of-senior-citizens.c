int countSeniors(char** details, int detailsSize) {
    int i,s,c,s1,r;
    c=0;
   for(i=0;i<detailsSize;i++)
   {
    s=details[i][11];
    s=s-'0';  
    s1=details[i][12];
    s1=s1-'0';
    r=s*10+s1;
    if(r>60)
    c++;
   }
     return c;  
}