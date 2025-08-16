int maximum69Number (int num) {
    int i,j,c,k,r,s;
int*ans=(int*)malloc(10*sizeof(int));
k=0;
while(num!=0)
{
    r=num%10;
    ans[k]=r;
    k++;
    num=num/10;
}
j=k-1;
for(i=0;i<k/2;i++)
{
    c=ans[i];
    ans[i]=ans[j];
    ans[j]=c;
    j--;
}
for(i=0;i<k;i++)
if(ans[i]==6)
{
    ans[i]=9;
    break;
}
s=0;
for(i=0;i<k;i++)
s=s*10+ans[i];
return s;
}
