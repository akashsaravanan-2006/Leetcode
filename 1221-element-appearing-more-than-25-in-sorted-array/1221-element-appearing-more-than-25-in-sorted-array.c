int findSpecialInteger(int* arr, int arrSize) {
    int i,j,k,grt,c,f,m;
    m=0;
    grt=0;
    if(arrSize==1)
    return arr[0];
    for(i=0;i<arrSize;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        if(arr[i]==arr[j])
        {
            f=1;
            break;
        }
        c=0;
        if(f==1)
        {
            for(k=0;k<i;k++)
            if(arr[i]==arr[k])
            c++;
            if(m<=c)
            {
            m=c;
            grt=arr[i];
            }
        }
    }
    return grt;
}