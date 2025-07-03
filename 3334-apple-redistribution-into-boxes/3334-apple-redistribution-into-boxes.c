int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
    int i,j,s=0,c,m;
    for(i=0;i<appleSize;i++)
    s=s+apple[i];
    for(i=0;i<capacitySize;i++)
    for(j=i+1;j<capacitySize;j++)
    if(capacity[i]<capacity[j])
    {
        c=capacity[i];
        capacity[i]=capacity[j];
        capacity[j]=c;
    }
    c=0;
    m=0;
    for(i=0;i<capacitySize;i++)
    {
        c=c+capacity[i];
        m++;
        if(c>=s)
        return m;
    }
    return m;
}