int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d) {
    int i,j,c=0,f;
    
  for(i=0;i<arr1Size;i++)
  {
    f=1;
  for(j=0;j<arr2Size;j++)
  if(abs(arr1[i]-arr2[j])<=d) 
  {
    f=0;
    break;
  }
  if(f==1)
  c++;
  }
  return c; 
}