int secondHighest(char* s) {
int i,j,f,m=0,n,c,k,a[100000];
n=strlen(s);
 for(i=0;i<n;i++)
 if(s[i]>='0' && s[i]<='9')
 a[m++]=(s[i]-'0'); 
 if(m==0)
 return -1;
 k=0;
 for(i=0;i<m;i++)
 {
    f=1;
    for(j=0;j<i;j++)
    if(a[i]==a[j])
    {
        f=0;
        break;
    }
    if(f==1)
    {
        a[k++]=a[i];
    }
 }
 if(k==1 || k==0)
 return -1;
 for(i=0;i<k;i++)
 for(j=i+1;j<k;j++)
 if(a[i]<a[j])
 {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
 }
 return a[1];
}