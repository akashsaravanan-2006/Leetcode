int maxDifference(char* s) {
    int n=strlen(s);
    int a[100],big,small,c,k=0;
    for(int i=0;i<n;i++)
     { 
          c=0;
        for(int j=0;j<n;j++)
        {
            if(s[i]==s[j])
            c++;
        }
        a[k++]=c;
     }
     for(int i=0;i<k;i++)
     if(a[i]%2!=0)
     big=a[i];
     for(int i=0;i<k;i++)
     {
        if(big<a[i] && a[i]%2!=0)
        big=a[i];
     } 
     for(int i=0;i<k;i++)
     {
        if(a[i]%2==0)
        small=a[i];
     }
     for(int i=0;i<n;i++)
     {
        if(small>a[i] && a[i]%2==0)
         small=a[i];
     }
     int p=big-small;
     return p;
}