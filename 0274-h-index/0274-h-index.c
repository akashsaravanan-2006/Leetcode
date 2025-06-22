int hIndex(int* citations, int citationsSize) {
    int i,j,c,h;
    for(i=0;i<citationsSize;i++)
    for(j=i+1;j<citationsSize;j++)
    if(citations[i]>citations[j])
    {
        c=citations[i];
        citations[i]=citations[j];
        citations[j]=c;
    }
    for(i=0;i<citationsSize;i++)
    {
        h=citationsSize-i;
        if(citations[i]>=h)
        return h;
    }
    return 0;
}