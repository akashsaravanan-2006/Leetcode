bool canBeEqual(int* target, int targetSize, int* arr, int arrSize) {
    int i,j;
    for(i=0;i<targetSize;i++)
    for(j=0;j<arrSize;j++)
    if(target[i]==arr[j])
    {
        target[i]=0;
        arr[j]=0;
        break;
    }
    for(i=0;i<targetSize;i++)
    if(target[i]!=0)
    return false;
    return true;
}