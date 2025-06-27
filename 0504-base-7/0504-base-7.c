char* convertToBase7(int num) {
    int r,m,i,n=0;
    m=0;
    char ans[100];
   char*ans1=(char*)malloc(2000*sizeof(char));
   if(num==0)
   {
      ans1[0]='0';
      ans1[1]='\0';
      return ans1;
   }
   if(num>0)
   {
   while(num!=0)
   {
    r=num%7;
    ans[m++]=r+'0';
    num=num/7;
   }
    for(i=m-1;i>=0;i--)
    ans1[n++]=ans[i];
    ans1[n]='\0';
    return ans1;
    }
    num=abs(num);
    while(num!=0)
   {
    r=num%7;
    ans[m++]=r+'0';
    num=num/7;
   }
    ans1[0]='-';
    n=1;
    for(i=m-1;i>=0;i--)
    ans1[n++]=ans[i];
    ans1[n]='\0';
    return ans1;

}