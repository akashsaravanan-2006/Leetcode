bool uniqueOccurrences(int* arr, int arrSize) {
    int i,c=0,m=0,k,j,a[arrSize],f;
  for(i=0;i<arrSize;i++)
 {
    f=1;
    for(j=0;j<i;j++)
    if(arr[i]==arr[j])
    {
        f=0;
        break;
    }
    c=0;
    if(f==1)
    {
        for(k=i;k<arrSize;k++)
        if(arr[i]==arr[k])
        c++;
    }
    if(c!=0)
    a[m++]=c;
 } 
 for(i=0;i<m;i++)
 for(j=i+1;j<m;j++)
 if(a[i]>a[j])
 {
    c=a[i];
    a[i]=a[j];
    a[j]=c;
 } 
 for(i=0;i<m-1;i++)
 if(a[i]==a[i+1])
 return false;
 return true;
}