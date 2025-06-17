int maxProduct(int n) {
    int s,r,i,j,c,k;
    int a[50];
    k=0;
    while(n!='\0')
    {
        r=n%10;
        a[k]=r;
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    for(j=i+1;j<k;j++)
    if(a[i]<a[j])
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
 return a[0]*a[1];
}