int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int i,j,c=0;
    for(i=0;i<fruitsSize;i++)
    for(j=0;j<basketsSize;j++)
    if(fruits[i] <= baskets[j])
    {
        baskets[j]=0;
        fruits[i]=0;
        break;
    }
    for(i=0;i<basketsSize;i++)
    if(baskets[i]!=0)
    c++;
    return c;
}