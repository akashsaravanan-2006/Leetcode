/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int i,j,m=0;
     int*ans=(int*)malloc(2000*sizeof(int));
  for(i=0;i<orderSize;i++)
  for(j=0;j<friendsSize;j++)
  if(order[i]==friends[j])
  ans[m++]=order[i];
  *returnSize=m;
  return ans;  
}