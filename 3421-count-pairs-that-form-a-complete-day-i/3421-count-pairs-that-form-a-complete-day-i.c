int countCompleteDayPairs(int* hours, int hoursSize) {
    int i,j,c;
    c=0;
    for(i=0;i<hoursSize;i++)
    for(j=i+1;j<hoursSize;j++)
    if((hours[i]+hours[j])%24==0)
    c++;
    return c;
}