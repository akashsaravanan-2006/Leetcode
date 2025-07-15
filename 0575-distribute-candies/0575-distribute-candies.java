class Solution {
    public int distributeCandies(int[] candyType) {
         int i,j,k=0,f,a;
         int candyTypeSize=candyType.length;
   a=candyTypeSize/2;
   for(i=0;i<candyTypeSize;i++)
   {
    f=1;
    for(j=0;j<i;j++)
    if(candyType[i]==candyType[j])
    {
        f=0;
        break;
    }
    if(f==1)
        k++;
   }
   if(k>=a)
   return a;
   return k;
    }
}