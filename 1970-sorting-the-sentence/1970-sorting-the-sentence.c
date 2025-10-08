

char * sortSentence(char * s){
int i,j,n=strlen(s),c=1,x,a,m=0,y;
char*ans=(char*)malloc(20000*sizeof(char));
for(i=0;i<n;i++)
if(s[i]==' ')
c++;
x=1;
for(i=0;i<n;i++)
{
if(x>c)
break;
if(s[i]==x+'0')
{
   a=i-1;
   for(j=a;j>=0;j--)
   {
   if(s[j]==' ')
   break;
   else 
   ans[m++]=s[j];
   }
   ans[m++]=' ';
   x++;
   i=-1;
}
}
if(ans[m-1] != ' ')
    ans[m++] = ' ';

j=0;
for(i=0;i<m;i++)
if(ans[i]==' ')
{
   y=i-1;
   for(x=j;x<y;x++)
   {
   c=ans[x];
   ans[x]=ans[y];
   ans[y]=c;
   y--;
   }
   j=i+1;
}
ans[m-1]='\0';
return ans;
}